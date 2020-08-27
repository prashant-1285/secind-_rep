#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace std;
using namespace cv;


int main( )
{

    Mat img=imread("dog.jpeg");
    namedWindow("Windows",WINDOW_AUTOSIZE);
    imshow("Windows",img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}