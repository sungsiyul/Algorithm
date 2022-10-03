#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int blank=1;
	getline(cin, input); //공백을 포함한 문자열 받기
	if (input.empty())
		blank = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ' ')
			blank++;
	}
	if (input[0] == ' ')
		blank--;
	if (input[input.length() - 1] == ' ')
		blank--;
	cout << blank;
	return 0;
}