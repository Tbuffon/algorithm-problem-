/*
骨牌。有2*n 的地板，用1*2和 2*1 的骨牌进行铺地板。问共有多少种情况。1<=n<=10000，  结果对 999983 取余。

输入格式：
输入n的值

输出格式：
输出多少种方法铺满地板

输入样例：
6
输出样例：
13

n = 1 : 1
n = 2 : 2
n = 3 : f(1) + f(2)
n = 4 : f(2) + f(3)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int i;
	int n;
	long long a[10001];
//	cout <<(long long)(pow(2,sizeof(long long)*4))<<endl;
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	cin >> n;
	for(int i = 3; i < 10001; i++){
		a[i] = (a[i-1] + a[i-2])%999983;
	} 
	cout << a[n]%999983 << endl;
	
	return 0;
}
