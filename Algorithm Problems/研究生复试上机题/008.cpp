/*
解方程。给定一个字符串，代表一个一元一次方程。如果有解求解，输出格式“x=数字” ，如果解的个数无穷，输出 “infinite solutions”。如果没有解输出“no solution”

字符串长度不超过 256 。

输入格式：
输入一个一元一次方程，未知数用x表示。

输出格式：
输出 “x=数字” 或者 “infinite solutions”或者“no solution”

输入样例：
10x-2x-8=4x+7+x
输出样例：
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
符号
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

