import torch
import torchvision
import torchvision.transforms as transforms
import torch.nn as nn
import torch.optim as optim
from torch.autograd import Variable
import torchvision.models as models

# Load HRNet model
model = models.hrnet(pretrained=True)
model = model.eval()

# Pre-processing input image
transform = transforms.Compose([
    transforms.Resize(256),
    transforms.CenterCrop(224),
    transforms.ToTensor(),
    transforms.Normalize(mean=[0.485, 0.456, 0.406],
                         std=[0.229, 0.224, 0.225])
])

# Load input image
img = Image.open("input_image.jpg")
img = transform(img).unsqueeze(0)

# Forward pass
with torch.no_grad():
    output = model(img)

# Decode the output to obtain object detections
detections = output.data

# Filter the detections based on confidence threshold
confidence_threshold = 0.5
detections = detections[detections[:, 4] > confidence_threshold]

# Draw bounding boxes on the input image
draw = ImageDraw.Draw(img)
for detection in detections:
    bbox = [int(i) for i in detection[0:4]]
    draw.rectangle(bbox, outline="red")

# Save the image with bounding boxes
img.save("output_image.jpg")
