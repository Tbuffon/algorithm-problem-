/*
�ⷽ�̡�����һ���ַ���������һ��һԪһ�η��̡�����н���⣬�����ʽ��x=���֡� �������ĸ��������� ��infinite solutions�������û�н������no solution��

�ַ������Ȳ����� 256 ��

�����ʽ��
����һ��һԪһ�η��̣�δ֪����x��ʾ��

�����ʽ��
��� ��x=���֡� ���� ��infinite solutions�����ߡ�no solution��

����������
10x-2x-8=4x+7+x
���������
x=5
*/

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include<map>
using namespace std;
/*
����
+-=
*/
int main() {
	string s;
	cin >> s;
	int sum_x = 0;
	int sum_d = 0;
	int flag = 1;
	int isright = 1;
	int num = 0;
	for (int i = 0; i < s.size(); i++) {
		
		if (s[i] >= '0' && s[i] <= '9'){
			
			num *= 10;
			num += s[i] - '0';
		}
		if (s[i] == 'x') {
			if (num == 0) sum_x += 1*flag*isright;
			else sum_x = sum_x + flag * num*isright;
			num = 0;

		}
		if (s[i] == '+') {
			sum_d += num * flag * isright;
			flag = 1;
			num = 0;
		}
		if (s[i] == '-') {
			sum_d += num * flag * isright;
			num = 0;
			flag = -1;
		}
		if (s[i] == '=') {
			sum_d += num * flag * isright;
			flag = 1;
			isright = -1;
			num = 0;
		}
	}
	sum_d += num * flag * isright;
	if (sum_x == 0 && sum_d!=0) {
		cout << "no solution" << endl;
	}
	else if (sum_x == 0 && sum_d == 0) {
		cout << "infinite solutions" << endl;
	}
	else {
		cout << "x="<<  - sum_d / sum_x << endl;
	}
	return 0;
}

