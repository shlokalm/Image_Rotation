/**
 * @file Morphology_1.cpp
 * @brief Erosion and Dilation sample code
 * @author OpenCV team
 */

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include<opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat imrotate(Mat image, double angle)
{
	Mat x;
	Point2f pt(image.cols / 2., image.rows / 2.);
	Mat y = getRotationMatrix2D(pt, angle, 1.0);
	warpAffine(image, x, y, Size(image.cols, image.rows));
	return x;
}
int main()
{
	cout << "Please Input the angle: ";
	double angle;
	cin >> angle;

	Mat image = imread("img.jpg", IMREAD_UNCHANGED);

	Mat rot;
	rot = imrotate(image, angle);
	imshow("rot", rot);
	imshow("image", image);
	waitKey(0);
	return 0;

 }
//![dilation]
//! 