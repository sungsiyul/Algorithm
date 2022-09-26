#include <iostream>
#include <string>
using namespace std;

int main() {
	int count;
	cin >> count;

	string OX;
	for (int i = 0; i < count; i++) {
		cin >> OX;
		int tot=0, score = 0;
		for(int j=0; j < OX.length(); j++){
			if (OX[j] == 'O') {
				score++;
			}
			if (OX[j] == 'X') {
				score = 0;
			}
			tot += score;
		}
		cout << tot << "\n";
	}
}