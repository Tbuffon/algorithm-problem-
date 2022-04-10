/*
写一个函数，判断一个字符串是否是对称字符串，比如abcddcba，要求函数返回值是布尔类型。

输入格式：
手工输入一串字符串

输出格式：
输出布尔型数据1或者0
输入样例：
abcba
输出样例：
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
