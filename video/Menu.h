//
// Created by Maximilian on 26.07.2020.
//

#ifndef VIDEO_MENU_H
#define VIDEO_MENU_H

#include <windows.h>
#include <functional>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

inline COORD coord(short int x, short int y); // conversion int to COORD

class Menu {
private:
	HANDLE handle;

	vector<string> titles; // names of fields
	vector<int> values; // values of fields

	vector<string> commands; // names of commands
	vector<fun>

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

	void checkInput(bool redraw = 1);
};

#endif //VIDEO_MENU_H
