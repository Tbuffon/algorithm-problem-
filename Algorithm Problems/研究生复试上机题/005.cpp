/*
�����ʽ��
�ֹ�����һ����������

�����ʽ��
�����������������0-9�ĸ���

����������
1 1 2 3 4 5 6 7 8 9 0
���������
1 2 1 1 1 1 1 1 1 1 1

*/

#include <iostream> 
#include <cstdio>

using namespace std;

int main(){
	int a[100];
	int count[10] = {0};
	for(int i = 0; scanf("%d",&a[i]); i++){
		int j = 0;
		while(a[i] != j){
			j++;
		}
		count[j]++;
	}
	printf("%d",count[0]);
	for(int i = 1; i < 10; i++){
		printf(" %d",count[i]);
	}
	return 0;
}

