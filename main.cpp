#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace std;
using namespace cv;


int main( )
{

    Mat img=imread("dog.jpeg");
    namedWindow("Window",WINDOW_AUTOSIZE);
    imshow("Window",img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}