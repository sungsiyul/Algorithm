#include <iostream>
using namespace std;

int main() {
	int  a, b;
	while (!(cin >> a >> b).eof()) { //we don't know ENDING
		cout << a + b << "\n";
	}
	return 0;
}

//int main() {
//	int  a, b;
//	while (cin >> a >> b) { //operator overloading
//		cout << a + b << "\n";
//	}
//	return 0;
//}