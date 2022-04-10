 #include <iostream>
 #include <cstdio>
 using namespace std;
 int a[1000000];
 
 int main(){
 	a[0] = 1;
 	a[1] = 2;
 	for(int i = 2; i < 1000000;i++){
 		a[i] = (a[i-1]*2 + a[i-2])%32767;
	 }
	int n;
	cin >> n;
	int b[n];
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	for(int i = 0; i < n; i++){
		cout << a[b[i]-1]<<endl;
	}
 	return 0;
 }
