#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, result;
	int num[10] = { };
	cin >> a >> b >> c;
	string str = to_string(a*b*c);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < str.length(); j++) {
			if (char(i+48) == str[j]) {
				num[i]= num[i]+1;
			}
		}
		cout << num[i] << "\n";
	}
}