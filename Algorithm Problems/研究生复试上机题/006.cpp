
/*
дһ������������e������e�ļ��㹫ʽ��Ҫ�󾫶�10-5���ݣ�e�ļ��㹫ʽ��e=1/1!+1/2!+1/3��+ ����

�����ʽ��
ֱ�����e
���������
2.718282
*/

#include <iostream>

using namespace std;

int main(){
	int n = 1, k = 1;
	double a = 0.00001, e = 1;
	do{
		k *= n;
		n++;
		e += 1.0/k;
	} while (1.0/k >= a);
	
	printf("%lf",e);
	return 0;
}

