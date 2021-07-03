//
// Created by Maximilian on 25.09.2020.
//

#ifndef VISUALMOUSE_MOUSE_H
#define VISUALMOUSE_MOUSE_H

#include <functional>
#include <opencv2/opencv.hpp>

using namespace cv;

class Mouse {
public:
	static void callBack(int event, int x, int y, int flags, void* userdata);

	static void waitKey(int delay); // задержка со считыванием клавиатуры
	static const int& getKey();

	static const int& getX();
	static const int& getY();

	static void setScale(int sc);
	static const double& getScale();

	static int getK();
private:
	static int x, y;

	static int k;

	static int key;

	static double scale;
};

#endif //VISUALMOUSE_MOUSE_H
