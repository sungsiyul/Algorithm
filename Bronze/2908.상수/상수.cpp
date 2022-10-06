#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, bigger;
	cin >> a >> b;

	//뒷자리부터 비교, string끼리도 대소비교가 가능.
	for (int i = 2; i >= 0; i--) {
		if (a[i] > b[i]){
			bigger = a;
			break;
		}
		else if (a[i] < b[i]){
			bigger = b;
			break;
		}
	}
	cout << bigger[2] << bigger[1] << bigger[0];
	return 0;
}