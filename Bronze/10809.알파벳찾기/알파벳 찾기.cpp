#include <iostream>
#include <string>
using namespace std;

//google�� ���� �ľ��� ����
int main() {
	string input;
	cin >> input;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 26; i++) {
		cout << int(input.find(alphabet[i])) << " "; //str.find("a") : str���� a�� ���° �ε����� �ִ°�?
												//unsigned ���·� ����� ���� (int)������ �������ָ鼭 -1�� ���.
	}
	return 0;
}

//���� for���� ���� ���� Ǯ� ��
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
