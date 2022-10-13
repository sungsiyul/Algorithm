#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	while(1){
		cin >> a >> b >> c; //345 354 435 453 534 543
		//a,b,c 값 정리
		if (a > b) {
			int temp = a;
			a = b;
			b = temp;
		}
		if (b > c) {
			int temp = b;
			b = c;
			c = temp;
		}

		if (a == 0 && b == 0 && c == 0) //논리 연산자 &&
			return 0;
		
		if (a*a + b*b == c*c)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return 0;
}