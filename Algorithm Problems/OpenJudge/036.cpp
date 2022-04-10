 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
	int a, b;
	cin >>a>>b;
	while(true){
		if(a > b){
			a = a%b;
		}
		else{
			b = b%a;
		}
		if(a==0){
			cout << b;
			break;
		}
		if(b==0){
			cout << a;
			break;
		}
	}
 	return 0;
 }
