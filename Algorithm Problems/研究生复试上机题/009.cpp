/*
дһ���������ж�һ���ַ����Ƿ��ǶԳ��ַ���������abcddcba��Ҫ��������ֵ�ǲ������͡�

�����ʽ��
�ֹ�����һ���ַ���

�����ʽ��
�������������1����0
����������
abcba
���������
1
*/

#include <iostream> 
#include <cstring>
using namespace std;

int main(){
	char a[100];
	cin >> a;
	int len = strlen(a);
	int left = 0;
	int right = len - 1;
	bool flag = true;
//	while(left < right){
//		if(a[left] != a[right]){
//			flag = false;
//		}
//		left++;
//		right--;
//	}
	for(int left = 0, right = len-1;left < right; left++, right--){
		if(a[left] != a[right]){
			flag = false;
		}
	}
	
	cout << flag << endl;
	
	return 0;
}
