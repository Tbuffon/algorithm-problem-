#include <iostream>
//#include <algorithm>

using namespace std;

void bubbleSort(int a[], int N) { // ��׼�汾
  for (; N > 0; --N) // N�ε���
    for (int i = 0; i < N-1; ++i) // �����һ��, O(N)
      if (a[i] > a[i+1]) // ������Ԫ��i��i+1�ɷǵݼ�����
        swap(a[i], a[i+1]); // ��O(1)ʱ���ڽ���
}
int main(){
	return 0;
}
