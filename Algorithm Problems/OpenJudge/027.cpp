 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
 	int l,r,count = 0;
 	cin >> l >> r;
 	for(int i = l; i <= r; i++){
 		int k = i;
 		while(k!=0){
 			if(k%10 == 2){
 				count++;
			 }
			k /= 10;
		 }
	 }
	cout << count <<endl;
	
 	return 0;
 }
