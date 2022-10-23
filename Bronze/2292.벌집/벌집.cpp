#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	//01~01 ->1(1)
	//02~07 ->2(6)
	//08~19 ->3(12)
	//20~37 ->4(18)
	int i = 0;
	for (int sum=2; sum<=n; i++) {
		sum += 6 * i;
	}
	if (n == 1) i = 1;
	cout << i;
	return 0;
}