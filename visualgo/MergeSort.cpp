#include <iostream>

using namespace std;

void merge(int a[], int low, int mid, int high){
	// subarray1 = a[low..mid], subarray2 = a[mid+1..high], both sorted
	int N = high-low+1;
	int b[N]; // ���ۣ�Ϊʲô������Ҫһ����ʱ������ b�������������ʱ����b�Ļ����п��ܻὫa��δ�Ƚϵ�Ԫ�ظ��ǵ� 
	int left = low, right = mid+1, bIdx = 0;
	while (left <= mid && right <= high){// �鲢
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
	//Ҫ����������� a[low..high]
	if (low < high) {
		int mid = (low+high) / 2;
		mergeSort(a, low, mid); // �ֳ����� 
		mergeSort(a, mid+1, high); // �ݹ�ؽ���������
		merge(a, low, mid, high) ; // ������裺�鲢�ӳ��� 
	} 
}

int main(){
	return 0;
}
