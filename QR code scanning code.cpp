#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <zbar.h>
#include <iostream>

using namespace cv;
using namespace std;
using namespace zbar;

int main(int argc, char* argv[])
{
    VideoCapture cap(0);
    if (!cap.isOpened())
    {
        cout << "Unable to open camera" << endl;
        return -1;
    }

    ImageScanner scanner;
    scanner.set_config(ZBAR_NONE, ZBAR_CFG_ENABLE, 1);

    while (true)
    {
        Mat frame, gray;
        cap >> frame;

        cvtColor(frame, gray, COLOR_BGR2GRAY);
        int width = frame.cols;
        int height = frame.rows;
        uchar *raw = (uchar *)gray.data;

        Image image(width, height, "Y800", raw, width * height);
        int n = scanner.scan(
