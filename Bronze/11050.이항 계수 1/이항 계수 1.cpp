#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int son=1, mom=1;

	for (k; k > 0; k--) {
		son = son * n;
		n--;
		mom = mom * k;
	}

	cout << son / mom << '\n';

	return 0;
}