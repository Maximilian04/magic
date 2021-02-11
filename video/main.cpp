#include "include.h"

int main() {
	Menu menu;
	menu.add("first", 1);
	menu.add("second", 2);

	menu.add("exit", Menu::Command::exit);

	imshow("winCV", Mat(1, 1, CV_8UC3));
	menu.draw();
	while (menu.getState() != Menu::INACTIVE) {
		menu.add("state", menu.getState());
		menu.checkInput();

		waitKey(100);
	}

	destroyAllWindows();
	return (0);
}