#include <iostream>

using namespace std;

int alpha[26], cnt = 0;
string input;
//�ƽ�Ű�ڵ� : �빮�� 65~90, �ҹ��� 97~122

int main() {
    cin >> input;

    //�󵵼� üŷ
    for (int i = 0; i < input.length(); i++) {
        if (input[i] < 97) alpha[input[i] - 65]++; //�빮��
        else alpha[input[i] - 97]++; //�ҹ���
    }

    int max = 0, max_indx = 0;

    for (int i = 0; i < 26; i++) {
        if (max < alpha[i]) {
            max = alpha[i];
            max_indx = i;
        }
    }
    //���� ���� ���� ���ĺ��� �������ΰ�?
    for (int i = 0; i < 26; i++) {
        if (max == alpha[i]) cnt++;
    }
    //��������� ? ���, �ƴ϶�� �빮�ڷ� ���
    if (cnt > 1) cout << "?";
    else cout << (char)(max_indx + 65);
}