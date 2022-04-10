#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][3];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++)
			cin >> a[i][j];
	}
	int gold,silver,chopper,sum;
	gold = silver = chopper = sum = 0;
	for(int i = 0;i < n; i++){
		gold += a[i][0];
		silver += a[i][1];
		chopper += a[i][2];
	}
	sum = gold+silver+chopper;
	cout << gold <<" " << silver <<" " <<  chopper <<" " << sum <<endl;
	return 0;
}
