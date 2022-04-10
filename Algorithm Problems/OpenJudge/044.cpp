 #include <iostream>
 #include <cstdio>
 #include <cstring>
 using namespace std;
 
 
 int main(){
 	char a[81];
 	fgets(a,81,stdin);
 	int len = strlen(a);
 	for(int i = 0; i < len; i++){
 		if(a[i]>=65&&a[i]<=89 || a[i]>=97&&a[i]<=121){
 			a[i] = a[i]+1;
		 }
		 else if(a[i] == 90){
		 	a[i] = 65;
		 }
		 else if(a[i] == 122){
		 	a[i] = 97;
		 }
	 }
	 cout <<a<<endl;
 	return 0;
 }
