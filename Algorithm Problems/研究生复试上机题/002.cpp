#include <iostream>
#include <string>
/*
�����ʽ��
ÿ������������һ�г��Ȳ�����100���ַ�����

�����ʽ��
����ÿ������ʵ�����5��

��ʽ���£�a:num1 e:num2 i:num3 o:num4 u:num5

����������
my name is ignatius
���������
a:2
e:1
i:3
o:0
u:1
*/ 

void countVowelCharacter(char * s);

using namespace std;

int main(){
	char str[102];
	cin.getline(str,102);
	countVowelCharacter(str);
	return 0;
}

void countVowelCharacter(char * str){
	int count_a = 0;
	int count_e = 0;
	int count_i = 0;
	int count_o = 0;
	int count_u = 0;
	
	for(int i = 0; str[i]; i++){
		switch(str[i]){
			case 'a':
			case 'A':
				count_a++;
				break;
			case 'e':
			case 'E':
				count_e++;
				break;
			case 'i':
			case 'I':
				count_i++;
				break;
			case 'o':
			case 'O':
				count_o++;
				break;
			case 'u':
			case 'U':
				count_u++;
				break;
			default:
				break;
		}
	}
	cout << "a:" << count_a <<endl;
	cout << "e:" << count_e <<endl;
	cout << "i:" << count_i <<endl;
	cout << "o:" << count_o <<endl;
	cout << "u:" << count_u <<endl;
}
