#include <iostream>
using namespace std;
int main() {
	char s[] = "Hello";  
	char * p;
	for(p = s;*p != '\0';p = p+1)
		cout << * p ; 
	return 0;
}
