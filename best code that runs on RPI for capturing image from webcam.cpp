#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    VideoCapture cap(0); // 0 is the default camera index

    if (!cap.isOpened())
    {
        cout << "Error opening webcam" << endl;
        return -1;
    }

    namedWindow("Webcam", WINDOW_NORMAL);

    while (true)
    {
        Mat frame;
        cap >> frame;

        if (frame.empty())
        {
            cout << "No image from webcam" << endl;
            break;
        }

        imshow("Webcam", frame);

        char c = (char)waitKey(25);
        if (c == 27)
        {
            cout << "Exiting..." << endl;
            break;
        }
    }

    cap.release();
    destroyAllWindows();

    return 0;
}
