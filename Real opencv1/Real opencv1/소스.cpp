#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
	Mat orgimage, edgeimage, edgeimage1;
	orgimage = imread("basic shape.jpg");
	//orgimage = imread("Lenna.png");

	Canny(orgimage, edgeimage, 130, 210, 3);
	Canny(orgimage, edgeimage1, 205, 210, 3);
	imshow("canny", edgeimage);
	imshow("canny1", edgeimage1);
	waitKey(0);
}