//
// Created by Maximilian on 25.02.2021.
//

#ifndef VIDEO_VIDEOINPUT_H
#define VIDEO_VIDEOINPUT_H

#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

class VideoInput {
public:
	VideoInput(); // set file-fields to nullptr
	~VideoInput();

	string report; // state of object;

	bool open(string _name = ""); // open new video file
	Mat getFrame(bool newFrame = true); // return new or old frame
	bool getFrame(Mat& dst, bool newFrame = true); // put new or old frame in dst

	bool grabFrame(bool makeReport = true);

private:
	bool isOpened;

	VideoCapture fileCapture;
	char* fileName; // file name as c-style string
};


#endif //VIDEO_VIDEOINPUT_H
