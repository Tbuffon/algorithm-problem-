#include <iostream>

using namespace std;

void insertionSort(int a[], int N){//�������� 
	int j = 0;
	for(int i = 1; i < N; i++){//(O(N)
		int X = a[i];//X��Ҫ��������Ǹ���
		for(j = i-1; j >= 0 && a[j] > X; j--){//�ٶ��п����� 
			a[j+1] = a[j];//ΪX�ڳ�һ���ռ� 
		}
		a[j+1]  = X;//�˴�Ϊ����� 
	}
}

int main(){
	return 0;
}
