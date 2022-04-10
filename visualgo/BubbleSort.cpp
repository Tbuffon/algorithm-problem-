#include <iostream>
//#include <algorithm>

using namespace std;

void bubbleSort(int a[], int N) { // 标准版本
  for (; N > 0; --N) // N次迭代
    for (int i = 0; i < N-1; ++i) // 除最后一次, O(N)
      if (a[i] > a[i+1]) // 若数组元素i和i+1成非递减次序
        swap(a[i], a[i+1]); // 在O(1)时间内交换
}
int main(){
	return 0;
}
