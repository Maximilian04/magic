//
// Created by Maximilian on 25.02.2021.
//

#include "VideoInput.h"

VideoInput::VideoInput() : fileName(nullptr), fileCapture(nullptr), isOpened(false), report("ok close") {

}

VideoInput::~VideoInput() {
	delete[] fileName;
}

bool VideoInput::open(string _name) {
	delete fileName;
	fileName = new char[_name.size() + 1];

	for (int i = 0; i < _name.size(); ++i) {
		fileName[i] = _name[i];
	}
	fileName[_name.size()] = '\0';
	fileCapture.open(fileName);

	if (fileCapture.isOpened()) {
		report = "ok open";

		return grabFrame(0);
	} else {
		report = "error open";
		return 0;
	}
}

Mat VideoInput::getFrame(bool newFrame) {
	Mat res;
	if (newFrame) {
		grabFrame();
	}

	if (fileCapture.retrieve(res)) {
		report = "ok read";
	} else {
		report = "error read";
	}

	return res;
}

bool VideoInput::getFrame(Mat& dst, bool newFrame) {
	if (fileCapture.retrieve(dst)) {
		report = "ok read";
		return 1;
	} else {
		report = "error read";
		return 0;
	}
}

bool VideoInput::grabFrame(bool makeReport) {
	if (fileCapture.grab()) {
		if (makeReport)
			report = "ok get";
		return 1;
	} else {
		report = "error get";
		return 0;
	}
}
