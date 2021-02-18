#include "include.h"

int main() {
	Menu menu;
	menu.add("first", 1);
	menu.add("second", 2);

	menu.add("exit", Menu::Command::exit);

	imshow("winCV", Mat(1, 1, CV_8UC3));
	menu.draw();
	while (menu.getState() != Menu::INACTIVE) {
		menu.add("state", menu.getState(), false);
		menu.add("fields size", menu.titles.size(), false);
		menu.add("fields size", menu.titles.size(), true);
		menu.checkInput();

		waitKey(10);
	}

	destroyAllWindows();
	return (0);
}