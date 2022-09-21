#include <iostream>
#include <string>
using namespace std;

//google을 통해 파악한 정답
int main() {
	string input;
	cin >> input;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 26; i++) {
		cout << int(input.find(alphabet[i])) << " "; //str.find("a") : str에서 a가 몇번째 인덱스에 있는가?
												//unsigned 형태로 선언된 값을 (int)형으로 변경해주면서 -1을 출력.
	}
	return 0;
}

//이중 for문을 통해 직접 풀어본 답
//int main() {
//	char input[101];
//	cin >> input;
//	for (int i = 97; i <= 122; i++) {
//		int j;
//		for (j = 0; j < strlen(input); j++) {
//			if (char(i) == input[j]) {
//				break;
//			}
//		}
//		if (j == strlen(input))
//			j = -1;
//		cout << j << " ";
//	}
//}
