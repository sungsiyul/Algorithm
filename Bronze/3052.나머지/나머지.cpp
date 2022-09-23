#include <iostream>
using namespace std;

int main() {
	int input, rest, result=0;
	int count[42] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> input;
		rest = input % 42;
		count[rest]++;
	}
	for (int j = 0; j < 42; j++) {
		if (count[j] > 0)
			result++;
	}
	cout << result;
	return 0;
}