#include <iostream>

using namespace std;

void insertionSort(int a[], int N){//插入排序 
	int j = 0;
	for(int i = 1; i < N; i++){//(O(N)
		int X = a[i];//X是要被插入的那个数
		for(j = i-1; j >= 0 && a[j] > X; j--){//速度有快有慢 
			a[j+1] = a[j];//为X腾出一个空间 
		}
		a[j+1]  = X;//此处为插入点 
	}
}

int main(){
	return 0;
}
