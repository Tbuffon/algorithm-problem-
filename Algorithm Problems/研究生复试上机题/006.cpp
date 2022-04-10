
/*
写一个函数，计算e，给了e的计算公式，要求精度10-5次幂，e的计算公式：e=1/1!+1/2!+1/3！+ ……

输出格式：
直接输出e
输出样例：
2.718282
*/

#include <iostream>

using namespace std;

int main(){
	int n = 1, k = 1;
	double a = 0.00001, e = 1;
	do{
		k *= n;
		n++;
		e += 1.0/k;
	} while (1.0/k >= a);
	
	printf("%lf",e);
	return 0;
}

