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
public :
	enum STATE { // possible menus states
		INACTIVE, // if menu isn't rendering and is turned off
		WAITING_NAME, // if inputTitleNum == -1
		WAITING_VALUE // if inputTitleNum != -1
	};

	class Command {
	public:
		static void exit(Menu& menu);
	};

	Menu(); // state = WAITING_NAME
	~Menu();

	void checkConsole();

	void draw(); // render menu
	void add(const string& key, int value, bool redraw = false); // add or replace field
	void add(const string& key, function<void(Menu&)> cmd); // add or replace command
	void del(const string& key, bool redraw = false); // delete field or command
	void clear(); // delete all fields

	int getValue(const string& key);

	void checkInput(bool redraw = true);

	void setState(STATE _state); // set state don't think, it's useful
	STATE getState();

private:
	HANDLE handle;

public:
	vector<string> titles; // names of fields
	vector<int> values; // values of fields

	vector<string> commandNames; // names of commands
	vector<function<void(Menu&)>> commands; // implementations of commands

	int inputTitleNum; // -1, if program is waiting for title

	STATE state;
};

#endif //VIDEO_MENU_H
