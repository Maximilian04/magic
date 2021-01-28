#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 256; ++i) {
		cout << i << ':' << char(i) << endl;
	}

	cout << "MM" << endl;

	return 0;
}
