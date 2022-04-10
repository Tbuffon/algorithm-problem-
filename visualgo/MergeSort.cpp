#include <iostream>

using namespace std;

void merge(int a[], int low, int mid, int high){
	// subarray1 = a[low..mid], subarray2 = a[mid+1..high], both sorted
	int N = high-low+1;
	int b[N]; // 讨论：为什么我们需要一个临时的数组 b？答：如果不用临时数组b的话，有可能会将a中未比较的元素覆盖掉 
	int left = low, right = mid+1, bIdx = 0;
	while (left <= mid && right <= high){// 归并
		 b[bIdx++] = (a[left] <= a[right]) ? a[left++] : a[right++];
	}
	while (left <= mid){
		b[bIdx++] = a[left++]; // leftover, if any
	}
	while (right <= high){
		b[bIdx++] = a[right++]; // rightover, if any
	}
	for(int k = 0; k < N; k++) a[low+k] = b[k]; // copy back
	
}

void mergeSort(int a[], int low, int high){
	//要排序的数组是 a[low..high]
	if (low < high) {
		int mid = (low+high) / 2;
		mergeSort(a, low, mid); // 分成两半 
		mergeSort(a, mid+1, high); // 递归地将它们排序
		merge(a, low, mid, high) ; // 解决步骤：归并子程序 
	} 
}

int main(){
	return 0;
}
