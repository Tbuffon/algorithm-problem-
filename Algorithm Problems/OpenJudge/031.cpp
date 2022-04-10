 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
	int L,M,count;
	cin >> L >> M;
	count = L+1;
	int a[L+1];
	int b[M][2];
	for(int i =0; i < M; i++){
		cin >> b[i][0] >> b[i][1];
	}
	for(int i = 0;i <=L; i++){
		a[i] = 1;
	}
	
	for(int i = 0; i < M; i++){
		for(int j = b[i][0]; j <=b[i][1]; j++ ){
			if(a[j]==1){
				count--;
				a[j]=0;
			}
//			a[j] = 0;
		}
	}
//	for(int i = 0;i < L; i++){
//		if(a[i] == 1){
//			count++;
//		}
//	}
	
	cout << count <<endl;
	
 	return 0;
 }
