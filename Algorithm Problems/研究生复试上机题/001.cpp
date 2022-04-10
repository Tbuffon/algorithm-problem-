/*
�ǲ���������

����������ָ������������������Ҳ���������������磺107��701�Ǿ�����������[m,n]��Χ֮�ڵ����о���������

�����ʽ��
��������������m��n������m<n

�����ʽ��
���[m,n]֮��ľ�������

����������
105 110
���������
107
113
*/ 

#include <iostream>
#include <cmath>
#include <memory.h>

#define MAX_NUM 1000
bool isPrime[MAX_NUM + 10];

using namespace std;

bool isPrimeNumber(int num);
int reverseOfNumber(int num);

int main(){
	int m, n;
	freopen("001input.txt","r",stdin);
	cin >> m >> n;
	for(int i = m; i <= n; i++){
		if(isPrimeNumber(i) && isPrimeNumber(reverseOfNumber(i))){
			cout << i << endl;
		}
	}
	return 0;
}


bool isPrimeNumber(int num){
	if(num <= 1){
		return false;
	}
	int result = true;
	
	for(int i = 2; i <= sqrt(num); i++){
		if(num%i == 0){
			result = false;
			break;
		}
	}
	
	return result;
}

/*
ɸ�������� 
*/
//bool isPrimeNumber(int num){
//	memset(isPrime,true,(MAX_NUM + 10)*sizeof(bool));
//	
//	for(int i = 2; i <= MAX_NUM; i++){
//		if(isPrime[i]){
//			for(int j = 2*i; j <= MAX_NUM; j += i){
//				isPrime[j] = false;
//			}
//		}
//	}
//	return isPrime[num];
//}

int reverseOfNumber(int num){
	int result = 0;
	while(num/10){
		result = result*10 + num%10;
		num /= 10;
	}
	result = result*10 + num;
	return result;
}























