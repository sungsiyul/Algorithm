#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, bigger;
	cin >> a >> b;

	//���ڸ����� ��, string������ ��Һ񱳰� ����.
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