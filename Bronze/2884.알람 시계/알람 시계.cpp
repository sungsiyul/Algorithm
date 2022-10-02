#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	m = m - 45;
	if (m < 0) {
		if (h == 0) {
			h = 24;
		}
		m = m + 60;
		h = h - 1;
	}
	cout << h << " " << m << "\n";
	return 0;
}