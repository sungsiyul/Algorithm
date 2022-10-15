#include <iostream>
using namespace std;

int main() {
	int cnt;
	cin >> cnt;
	int room = 0;
	for (int i = 0; i < cnt; i++) {
		int h, w, n;
		cin >> h >> w >> n;

		if (n % h == 0)
			room = h * 100 + n / h;
		else
			room = n % h * 100 + n / h + 1;

		cout << room << '\n';
	}
	return 0;
}