#include <iostream>
using namespace std;

int main() {
	int input[8], std[8], sum = 0;
	for (int i = 0; i < 8; i++) {
		cin >> input[i];
	}
	for (int j = 0; j < 8; j++) {
		if (input[j] == j + 1)
			std[j] = 1;
		else if (input[j] == 8 - j)
			std[j] = -1;
		else
			std[j] = 0;
	}
	for (int k = 0; k < 8; k++) {
		sum = sum + std[k];
	}
	if (sum == 8)
		cout << "ascending";
	else if (sum == -8)
		cout << "descending";
	else
		cout << "mixed";
	return 0;
}