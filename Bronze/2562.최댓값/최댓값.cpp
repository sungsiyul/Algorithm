#include <iostream>
using namespace std;

int main() {
	int a, i, std=0, key;
	for (i = 0; i < 9; i++) {
		cin >> a;
		if (std < a) {
			std = a;
			key = i;
		}
	}
	cout << std << "\n" << key+1;
	return 0;
}