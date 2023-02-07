#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
    VideoCapture cap(0); // open the default camera

    if(!cap.isOpened()) { // check if we succeeded
        cout << "Failed to open camera" << endl;
        return -1;
    }

    Mat frame;
    while(true) {
        cap >> frame; // get a new frame from camera

        // Check if frame is empty
        if (frame.empty()) {
            cout << "Error: Empty frame" << endl;
            break;
        }

        imshow("Webcam Image", frame);
        if(waitKey(30) >= 0) break;
    }

    return 0;
}
