//
// Created by Maximilian on 25.09.2020.
//

#include "Mouse.h"

int Mouse::key = -1; // последн€€ нажата€ клавиша

int Mouse::x = 0; // коррдинаты мыши
int Mouse::y = 0; // коррдинаты мыши

int Mouse::k = 0;

double Mouse::scale = 1.0;

#include <iostream>
using namespace std;

int Mouse::getK() {
	int res = k;
	k = 0;
	return res;
}

void Mouse::callBack(int event, int x_, int y_, int flags, void* userdata) {
	switch (event) {
		case EVENT_MOUSEMOVE:
			x = x_;
			y = y_;
			break;
		case EVENT_LBUTTONDOWN:
			x = x_;
			y = y_;

			//ffunc(-1);
			k = -1;
			break;
		case EVENT_RBUTTONDOWN:
			x = x_;
			y = y_;

			//ffunc(1);
			k = 1;
			break;
		case EVENT_MBUTTONDOWN:
			x = x_;
			y = y_;
			break;
		case -1:
			setScale(flags);
			break;
	}
}

void Mouse::waitKey(int delay) {
	key = cv::waitKey(delay);
}

const int& Mouse::getKey() {
	return key;
}

const int& Mouse::getX() {
	return x;
}

const int& Mouse::getY() {
	return y;
}

void Mouse::setScale(int sc) {
	scale = sc / 100.0;
}

const double& Mouse::getScale() {
	return scale;
}