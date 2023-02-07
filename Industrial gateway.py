import os
import sys
import time
import RPi.GPIO as GPIO

# Configure GPIOs
GPIO.setmode(GPIO.BCM)
GPIO.setup(17, GPIO.OUT)

# Define callback function for incoming data
def callback_function(channel):
    print("Received data on channel", channel)

# Configure interrupt on falling edge for incoming data
GPIO.add_event_detect(17, GPIO.FALLING, callback=callback_function, bouncetime=300)

# Loop forever
while True:
    time.sleep(1)
