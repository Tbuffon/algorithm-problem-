 #include <iostream>
 #include <cstdio>
 #include <string>
 using namespace std;
 
char a[256];
 
 int main(){
 	int count = 0;
	cin.getline(a,256);
	for(int i = 0 ; a[i]; i++){
		if(a[i]>=48 && a[i]<=57){
			count++;
		}
	}
	cout << count <<endl;
 	return 0;
 }
