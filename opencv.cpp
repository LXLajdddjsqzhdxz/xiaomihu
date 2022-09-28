#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
using namespace cv;

int main()
{
	// 读入一张图片（绝对路径，选择自己的图片路径）
	Mat img = imread("F:\\test\\test1.jpg");
	// 创建一个名为 "test"窗口    
	namedWindow("test");
	imshow("test", img);
	waitKey(0);
	return 0;
}
