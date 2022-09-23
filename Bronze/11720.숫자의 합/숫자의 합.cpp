#include <iostream>
#include <string>
using namespace std;

int main() {
	int count, result = 0;
	cin >> count;
	string input;
	cin >> input;
	for (int i = 0; i < count; i++) {
		result += (int)input[i] - 48; //ASCII code¸¦ °í·ÁÇÏ¿© 48À» »©ÁÜ.
	}
	cout << result;
}



//int main() {
//	int count, input, result=0, ele;
//	cin >> count;
//	cin >> input;
//	for (int i = count-1; i >= 0; i--) {
//		ele = input / pow(10, i);
//		result += ele;
//		input -= ele * pow(10, i);
//	}
//	cout << result;
//}
