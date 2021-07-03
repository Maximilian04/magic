//
// Created by Maximilian on 11.05.2021.
//

#include "Transformer.h"

Mat Transformer::result, Transformer::preShow, Transformer::base, Transformer::mix;
Mat Transformer::mixMask(1, 1, CV_8UC1);

void Transformer::transform(Mat img1, Mat img2) {
	system("python ../main.py");

	Mat warpMat(3, 3, CV_32F);

	ifstream warpInput;
	warpInput.open("warp.txt");

	for (int i = 0; i <= 2; ++i) {
		for (int j = 0; j <= 2; ++j) {
			warpInput >> warpMat.at<float>(i, j);
		}
	}

	warpInput.close();

	//cout << warpMat << endl;
	//system("pause");
	cv::warpPerspective(img2, Transformer::result, warpMat, Size(img1.cols, img1.rows));

	if (mixMask.rows == 1) {
		mixMask.create(base.rows, base.cols, CV_16FC1);
		mixMask *= 0;
	}

	base.copyTo(mix);
}
