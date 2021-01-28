//
// Created by Maximilian on 26.07.2020.
//

#ifndef VIDEO_MENU_H
#define VIDEO_MENU_H

#include <windows.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

inline COORD coord(short int x, short int y); // conversion int to COORD

class Menu {
private:
	HANDLE handle;
	//static COORD getSize();

	vector<string> titles;
	vector<int> values;

	int inputTitleNum; // -1, if program is waiting for title
public :
	Menu();
	~Menu();

	void checkConsole();

	void draw();
	void add(const string& key, int value, bool redraw = 0);
	void del(const string& key, bool redraw = 0);
	void clear();

	int getValue(const string& key);

	void checkInput();
};

#endif //VIDEO_MENU_H
