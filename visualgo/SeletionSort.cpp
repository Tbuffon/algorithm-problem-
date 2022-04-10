#include <utility>

using namespace std;

void selectionSort(int a[], int N){
	for(int L = 0; L < N-1; L++){//O(N)
		int min = a[L];
		for(int j = L+1; j < N-1; j++){//O(N)
			if(a[j] < a[j+1]){
				min = j;
			}
			swap(a[j],a[L]);
		}
	}
}

int main(){
	return 0;
}
