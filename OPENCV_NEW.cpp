#include "opencv2\imgproc.hpp"
#include "opencv2\objdetect\objdetect.hpp"
#include "opencv2\videoio\videoio.hpp"
#include "opencv2\imgcodecs\imgcodecs.hpp"
#include "opencv2\core\core.hpp"
#include "opencv2\highgui.hpp"
#include <vector>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <time.h>
using namespace cv;
using namespace std;
int main(int argc, const char** argv)
{
    VideoCapture cap(0);
    for (;;)
    {
        if (!cap.isOpened()) {
            cout << "Video Capture Fail" << endl;
            break;
        }
        else {
            Mat img;
            cap >> img;
            namedWindow("Video", WINDOW_AUTOSIZE);
            imshow("Video", img);
            int key2 = waitKey(20);
        }
    }
    return 0;
}