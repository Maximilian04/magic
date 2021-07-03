//
// Created by Maximilian on 11.05.2021.
//

#ifndef VIDEO_TRANSFORMER_H
#define VIDEO_TRANSFORMER_H

#include <fstream>
#include <windows.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class Transformer {
public:
	static void transform(Mat img1, Mat img2);
	static Mat result, preShow, base, mix;
	static Mat mixMask;


private:
};


#endif //VIDEO_TRANSFORMER_H
