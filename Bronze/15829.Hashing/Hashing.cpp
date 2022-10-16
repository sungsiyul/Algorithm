// cmath���� pow�� ��� X --> ���� ������� ���� X
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
		//��ó�� �ϸ� ���̰� ������� �� sum���� �ʹ� Ŀ���� ���� X
		//�Ʒ�ó�� ���ڰ� Ŀ���� �ʰ� ��� ���� �ȿ� �־���.
		sum = (sum + (alpabet_num * r)) % M;
		r = (r * mul) % M;
	}
	cout << sum << "\n";
	return 0;
}