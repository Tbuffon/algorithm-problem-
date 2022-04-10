 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 #define MAX_NUM 1000
 char isPrime[MAX_NUM + 1];//char 1 Byte, int 4 Byte
 
 int main(){
 	
 	for(int i =2; i<= MAX_NUM;i++){
 		isPrime[i] = 1;
	 }
	 
	for(int i = 2; i <= MAX_NUM; i++){
		if(isPrime[i])
			for(int j = 2*i; j <= MAX_NUM; j+=i)
				isPrime[j] = 0;
	}
	for(int i = 2; i <= MAX_NUM; i++)
		if(isPrime[i])
			cout << i << endl;
 	
 	return 0;
 }
