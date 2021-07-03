//
// Created by Maximilian on 26.07.2020.
// Class for creating a menu in the console
//

#include "Menu.h"
#include "symbols.h"

COORD coord(int x, int y) {
	COORD result;
	result.X = x;
	result.Y = y;
	return result;
}

//COORD Menu::getSize() {
//	CONSOLE_SCREEN_BUFFER_INFO* result = new CONSOLE_SCREEN_BUFFER_INFO;
//	GetConsoleScreenBufferInfo(handle, result);
//	return result->dwSize;
//}

void Menu::Command::exit(Menu& menu) {
	menu.setState(Menu::INACTIVE);
}

void Menu::Command::update(Menu& menu) {
	Mouse::callBack(-1, -1, -1, stoi(menu.getValue("scale")), nullptr);
}

void Menu::checkConsole() {
	//SetConsoleScreenBufferSize(handle, coord(10, 20));
	CONSOLE_SCREEN_BUFFER_INFO* info = new CONSOLE_SCREEN_BUFFER_INFO;
	GetConsoleScreenBufferInfo(handle, info);

	SetConsoleCursorPosition(handle, coord(0, 0));
	//cout << "размеры окна: " << info->dwSize.X << ' ' << info->dwSize.Y;

	cout
			_26 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _34
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _12
			<< endl
			_11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _04
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
			<< endl
			_29 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _41
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _10
			<< endl
			_11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _04
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
			<< endl
			_29 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _41
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _10
			<< endl
			_11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _04
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
			<< endl
			_29 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _41
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _10
			<< endl
			_11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _04
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
			<< endl
			_29 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _41
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _10
			<< endl
			_11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _04
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
			<< endl
			_29 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _41
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _10
			<< endl
			_11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _04
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
			<< endl
			_25 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _32
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _13
			<< endl
			_26 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _12
			<< endl
			_11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
			<< endl
			_25 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _13
			<< endl;

	SetConsoleCursorPosition(handle, coord(1, 14));

	cout << MoveWindow((HWND) handle, info->srWindow.Left, info->srWindow.Top, 20, 20, false);
}

void Menu::draw() {
	if (state == STATE::INACTIVE) {
		return;
	}
	system("cls");
	SetConsoleCursorPosition(handle, coord(0, 0));

	for (int i = 0; i < titles.size(); ++i) {
		SetConsoleCursorPosition(handle, coord(0, (i * 2)));
		if (i == 0) {
			cout
					_26 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _34
					_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
					_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _12;
		} else {
			cout
					_29 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _41
					_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
					_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _10;
		}

		if (i == inputTitleNum) {
			SetConsoleTextAttribute(handle, CURSORCOLOR);
		} else {
			SetConsoleTextAttribute(handle, TEXTCOLOR);
		}
		SetConsoleCursorPosition(handle, coord(0, (i * 2) + 1));
		cout _11 << titles[i];
		SetConsoleCursorPosition(handle, coord(31, (i * 2) + 1));
		cout _04 << values[i];
		SetConsoleCursorPosition(handle, coord(92, (i * 2) + 1));
		cout _11;

		if (i == inputTitleNum) {
			SetConsoleTextAttribute(handle, TEXTCOLOR);
		}
	}

	SetConsoleCursorPosition(handle, coord(0, (titles.size() * 2)));
	cout
			_25 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _32
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _13
			<< endl
			_26 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _12
			<< endl
			_11 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00
			_00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _00 _11
			<< endl
			_25 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30
			_30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _30 _13;

	SetConsoleCursorPosition(handle, coord(1, (titles.size() * 2) + 2));

	cout.flush();
}

void Menu::add(const string& key, string value, bool redraw) {
	for (int i = 0; i < titles.size(); ++i) { // todo: change to map
		if (titles[i] == key) {
			values[i] = value;
			if (redraw) {
				draw();
			}
			return;
		}
	}

	titles.push_back(key);
	values.push_back(value);
	if (redraw) {
		draw();
	}
}

void Menu::add(const string& key, function<void(Menu&)> cmd) {
	for (int i = 0; i < commandNames.size(); ++i) { // todo: change to map
		if (commandNames[i] == key) {
			commands[i] = cmd;
			return;
		}
	}

	commandNames.push_back(key);
	commands.push_back(cmd);
}

void Menu::del(const string& key, bool redraw) {
	for (int i = 0; i < titles.size(); ++i) { // todo: change to map
		if (titles[i] == key) {
			titles.erase(titles.begin() + i);
			values.erase(values.begin() + i);
		}
	}
	for (int i = 0; i < commandNames.size(); ++i) { // todo: change to map
		if (commandNames[i] == key) {
			commandNames.erase(commandNames.begin() + i);
			commands.erase(commands.begin() + i);
		}
	}
	if (redraw) {
		draw();
	}
}

void Menu::clear() {
	titles.clear();
	values.clear();
}

string Menu::getValue(const string& key) {
	for (int i = 0; i < titles.size(); ++i) { // todo: change to map
		if (titles[i] == key) {
			return values[i];
		}
	}

	return 0;
}

void Menu::checkInput(bool redraw) {
	//if (state == STATE::INACTIVE) {
	//	return;
	//}
	//while () {
	if (inputTitleNum == -1) {
		string inputTitle;
		if (!(cin >> inputTitle)) return;//break;
		for (int i = 0; i < titles.size(); ++i) { // todo: change to map
			if (titles[i] == inputTitle) {
				setState(STATE::WAITING_VALUE);
				inputTitleNum = i;
				break;
			}
		}
		for (int i = 0; i < commandNames.size(); ++i) { // todo: change to map
			if (commandNames[i] == inputTitle) {
				setState(STATE::WAITING_NAME);
				(commands[i])(*this);
				break;
			}
		}
	} else {
		if (!(cin >> values[inputTitleNum])) return;//break;
		inputTitleNum = -1;
		setState(STATE::WAITING_NAME);
	}
	if (redraw) {
		draw();
	}
	//}
}

void Menu::setState(Menu::STATE _state) {
	state = _state;
}

Menu::STATE Menu::getState() {
	return state;
}

Menu::Menu() : inputTitleNum(-1), state(STATE::WAITING_NAME) {
	setlocale(LC_ALL, "ru_RU.UTF-8"); // to russian letters

	handle = GetStdHandle(STD_OUTPUT_HANDLE); // handle to cout

	SetConsoleTextAttribute(handle, TEXTCOLOR);
	cin.tie(nullptr);
	cout.tie(nullptr);

	SetConsoleTitle("video  Maximilian");

	system("cls");
}

Menu::~Menu() = default;