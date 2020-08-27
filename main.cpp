#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace std;
using namespace cv;


int main( )
{

    Mat img=imread("dog.jpeg");
    namedWindow("Windowsss",WINDOW_AUTOSIZE);
    imshow("Windowsss",img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}