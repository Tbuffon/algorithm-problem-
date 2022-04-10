/*
String to int
ģ��atoi�������ҳ�һ���ַ�����һ��int�͵����֡�

����������
2016
000687CS01
���������
2016
678

*/

#include <iostream>
#include <cmath>

using namespace std;
bool isNumber(char c); //�ж�һ���ַ��Ƿ��������ַ�
int strToInt(char *s); //�ҳ�һ���ַ�����һ��int�͵����ֲ�����

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
	int result = -1; //��û���ҵ�int������Ĭ�Ϸ���-1
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
	//�Ը��Ž��д���
	if ((begin - 1) >= 0 && s[begin -1] == '-'){
		result = 0 - result;
	}
	
	return result;
}

