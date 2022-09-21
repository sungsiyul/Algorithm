#include <iostream>
using namespace std;

int main() {
	int line;
	cin >> line;
	int i, j, k;
	for (i=1; i <= line; i++) {
		for (j = 1; j <= line - i; j++) {
			cout << " ";
		}
		for (k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}