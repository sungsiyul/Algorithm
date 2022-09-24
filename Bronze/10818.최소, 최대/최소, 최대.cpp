#include <iostream>
using namespace std;

int main() {
	int count, input, max=-1000000, min=1000000;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> input;
		if (max < input) {
			max = input;
		}
		if (min > input) {
			min = input;
		}
	}
	cout << min << " " << max;
	return 0;
}