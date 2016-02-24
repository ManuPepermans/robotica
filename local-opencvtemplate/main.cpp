#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{

	// Read image
	Mat im = imread( "./green.jpg", IMREAD_COLOR);

    // Show image
    imshow("img", im );

	waitKey(0);
}
