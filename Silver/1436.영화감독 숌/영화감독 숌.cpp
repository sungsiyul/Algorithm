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
		res++; //계속 1씩 더하다가 666이 있을 때만 cnt에 1을 더함. 666이 존재하는 값이 입력한 n번 나타나면 break;
	}
	cout << res;
	return 0;
}