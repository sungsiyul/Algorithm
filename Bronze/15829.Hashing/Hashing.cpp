// cmath에서 pow를 사용 X --> 길이 길어지면 실행 X
#include <iostream>
#include <string>
using namespace std;

const int M = 1234567891;
const int mul = 31;

int main() {
	int l;
	string input;

	cin >> l >> input;
	
	long long sum = 0;
	long long r = 1;

	for (int i = 0; i < l; i++) {
		int alpabet_num = input[i] - ('a' - 1);
		//sum = sum + (alpabet_num * r);
		//r = r* mul;
		//위처럼 하면 길이가 길어졌을 때 sum값이 너무 커져서 실행 X
		//아래처럼 숫자가 커지지 않고 계속 범위 안에 둬야함.
		sum = (sum + (alpabet_num * r)) % M;
		r = (r * mul) % M;
	}
	cout << sum << "\n";
	return 0;
}