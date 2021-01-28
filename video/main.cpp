#include "include.h"

int main() {
	Menu menu;
	menu.add("first", 1);
	menu.add("second", 2);

	imshow("winCV", Mat(1, 1, CV_8UC3));
	menu.draw();
	while (true) {
		menu.checkInput();

		waitKey(100);
	}

	return (0);
}