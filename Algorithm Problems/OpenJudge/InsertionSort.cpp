#include <iostream> 

using namespace std;

void InsertionSort(int a[], int size){
	for(int i = 1; i < size; ++i){
		// a[i]�����������Ԫ�أ�ÿ��ѭ����a[i]�ŵ����ʵ�λ�� 
		for(int j = 0; j < i; j++){
			if(a[j] > a[i]){
				// 
				int tmp = a[i];
				for(int k = i; k > j; k--){
					a[k] = a[k-1];
					a[j] = tmp;
					break;
				}
			}
		}
	}
}

void insertionSort(int a[], int N){
	for(int i = 1;)
}
