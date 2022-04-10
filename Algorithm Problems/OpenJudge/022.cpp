 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 int main(){
 	long int n;
 	cin >> n;
 	while(true){
 		if(n==1){
 			cout<<"End"<<endl;
 			break;
		 }
 		if(n%2==1){
 			cout<< n << "*3+1=" << n*3+1 <<endl;
 			n = n*3+1;
		 }
		else{
			cout<< n << "/2=" << n/2 <<endl;
			n /= 2;
		}
	 }
 	
 	return 0;
 }
