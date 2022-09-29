#include <iostream>
#include <string>
using namespace std;

int main() {
	int count;
	cin >> count;
	for (int i = 0; i < count; i++) {
		int strcnt;
		string input;
		cin >> strcnt >> input;
		for (int j = 0; j < input.length(); j++) {
			for (int k = 0; k < strcnt; k++) {
				cout << input[j];
			}
		}
		cout << "\n";
	}
	return 0;
}