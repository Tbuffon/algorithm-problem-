#include <iostream>
#include <algorithm>
//#include <cstdlib> 

using namespace std;

int partition(int a[], int i, int j) {
	int p = a[i]; // p is pivot
//	p = rand()%(j-i+1) + i;  // random quick sort
	int m = i; // S1 and S2 is initially empty
	for(int k = i+1; k <= j; k++){
		if(a[k] < p) { // case 2 : a[k] < pivot
			m++;
			swap(a[k], a[m]); // C++ STL algorithm std::swap
		}
	} // Note : In case 1 we do nothing: a[k] >= p
	swap(a[i], a[m]); // The final step , swap a[m] for pivot
	return m; // return the index of pivot for Quick Sort
}

void quickSort(int a[], int low, int high){
	if (low < high) {
		int m = partition(a, low, high); // O(N)
		// a[low..m-1], pivot, a[m+1..high]
		quickSort(a, low, m-1); // sort the left subsequence recursively
		// a[m] was sorted after the partition
		quickSort(a, m+1, high); // and then sort the right subarray
	}
}
int main(){
	return 0;
}
