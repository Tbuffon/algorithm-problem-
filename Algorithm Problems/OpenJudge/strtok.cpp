 #include <iostream>
#include <cstring>
using namespace std;
 
 int main(){
 	char str[] = "- This, a sample string, OK.";
 	char *p = strtok(str, " ,.-");
 	while(p != NULL){
 		cout << p << endl;
 		p = strtok(NULL, " ,.-");
	 }
	return 0;
 }
