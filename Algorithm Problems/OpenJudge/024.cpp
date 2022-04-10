 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
 	int N;
 	cin >> N;
 	if(N<0){
 		cout<<'-';
 		N=-N;
	 }
	 if(N==0){
	 	cout<<0;
	 }
	while(N!=0){
		if(N%10!=0){
			break;
		}
		N /= 10;
	}
	while(N!=0){
		cout << N%10;
		N /= 10;		
	}

 	return 0;
 }
