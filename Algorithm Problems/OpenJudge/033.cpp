 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
	int n,m;
	cin >> n >>m;
	int a[n][m];
	int b[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0 ; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0 ; j < m; j++){
			if(i==0||i==n-1||j==0||j==m-1){
				b[i][j] = a[i][j];
			}
			else{
				double average = double(a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1]+a[i][j])/5;
				if(average - (int)average >= 0.5){
					b[i][j] = (int)average + 1;
				}
				else{
					b[i][j] = (int)average;
				}
			}
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0 ; j < m; j++){
			cout << b[i][j];
			if(j!=m-1){
				cout << " ";
			}
		}
		cout<<endl;
	}
 	return 0;
 }
