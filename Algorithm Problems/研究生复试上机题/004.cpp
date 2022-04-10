/*
String to int
模仿atoi函数，找出一个字符串第一个int型的数字。

输入样例：
2016
000687CS01
输出样例：
2016
678

*/

#include <iostream>
#include <cmath>

using namespace std;
bool isNumber(char c); //判断一个字符是否是数字字符
int strToInt(char *s); //找出一个字符串第一个int型的数字并返回

int main(){
	char str[100];
	cout << " please input string" <<endl;
	cin.get(str,100);
	cout << strToInt(str)<< endl;
	return 0;
}


bool isNumber(char c){
	bool isNumber = false;
	if( c >= '0' && c <= '9'){
		isNumber = true;
	}
	return isNumber;
}

int strToInt(char *s){
	int result = -1; //若没有找到int型数字默认返回-1
	int begin, end;
	int length = 0;
	begin = 0;
	while ((!isNumber(s[begin])) && (s[begin] != '\0'))
		begin++;
	end = begin;
	while ((isNumber(s[end])) && (s[end] != '\0'))
		end++;
	length = end - begin;
	if (length > 0){
		result = 0;
	}
	for (int i = 0; i < length; i++){
		result = result + (s[end-i-1] - '0') * pow(10, i);
	}
	//对负号进行处理
	if ((begin - 1) >= 0 && s[begin -1] == '-'){
		result = 0 - result;
	}
	
	return result;
}

