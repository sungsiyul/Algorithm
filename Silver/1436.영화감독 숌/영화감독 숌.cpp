#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, cnt = 0, res = 666;
	string str;

	cin >> n;

	while (1) {
		str = to_string(res); 
		if (str.find("666") != string::npos)  //in "666"
				cnt++; //when str in 666, cnt++;
		if (cnt == n)
				break;
		res++; //��� 1�� ���ϴٰ� 666�� ���� ���� cnt�� 1�� ����. 666�� �����ϴ� ���� �Է��� n�� ��Ÿ���� break;
	}
	cout << res;
	return 0;
}