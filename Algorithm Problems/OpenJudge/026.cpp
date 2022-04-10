 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
	int M,N,X;
	cin>>M>>N>>X;
	int m = 0;
	int n;
	while(true){
		m=0;
		n=N;
		while(m<M){
			if(X==0){
				break;
			}
			X--;
			m += N;	
		}
		if(X==0&&m<M){
			break;
		}
		N = N+M/n;
	}
	cout << N <<endl;
 	return 0;
 }
