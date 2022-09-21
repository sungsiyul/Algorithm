#include <iostream>
using namespace std;

int main() {
	int line;
	cin >> line;
	for (int j = 0; j < line; j++) {
		for (int i = 0; i <= j; i++) {
			cout << "*";
		}
		cout << endl;
	}
}