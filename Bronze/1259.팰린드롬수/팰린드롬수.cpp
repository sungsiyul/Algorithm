#include <iostream>
#include <string>
using namespace std;

int main() {
	while(1){
		string input;
		cin >> input;
		if (input == "0") return 0;
		int key=1, j = input.length()-1;
		for (int i = 0; i < j; i++) {
			if (input[i] != input[j]) {
				cout << "no\n";
				key = 0;
				break;
			}
			j--;
		}
		if(key == 1) cout << "yes\n";
	}
	return 0;
}