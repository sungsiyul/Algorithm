#include <iostream>
using namespace std;

int main(){
	int score;
	cin >> score;
	int a = score / 10;
	switch (a) {
	case 10:
		cout << "A\n";
		break;
	case 9:
		cout << "A\n";
		break;
	case 8:
		cout << "B\n";
		break;
	case 7:
		cout << "C\n";
		break;
	case 6:
		cout << "D\n";
		break;
	default:
		cout << "F\n";
	}
}