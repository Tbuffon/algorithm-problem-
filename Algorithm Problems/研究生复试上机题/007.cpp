/*
���ơ���2*n �ĵذ壬��1*2�� 2*1 �Ĺ��ƽ����̵ذ塣�ʹ��ж����������1<=n<=10000��  ����� 999983 ȡ�ࡣ

�����ʽ��
����n��ֵ

�����ʽ��
��������ַ��������ذ�

����������
6
���������
13

n = 1 : 1
n = 2 : 2
n = 3 : f(1) + f(2)
n = 4 : f(2) + f(3)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int i;
	int n;
	long long a[10001];
//	cout <<(long long)(pow(2,sizeof(long long)*4))<<endl;
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	cin >> n;
	for(int i = 3; i < 10001; i++){
		a[i] = (a[i-1] + a[i-2])%999983;
	} 
	cout << a[n]%999983 << endl;
	
	return 0;
}
