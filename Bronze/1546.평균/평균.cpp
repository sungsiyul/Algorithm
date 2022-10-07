#include <iostream>
using namespace std;

int main() {
	int n;
	int score[1000] = {};
	int max = 0;
	double tot = 0;
	double result=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
		tot = tot + score[i];
	}
	result = (tot / max * 100) / n;
	cout << fixed;
	cout.precision(6);
	cout << result;
	return 0;
}