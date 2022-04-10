 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 int main(){
 	int x, y;
	char z;
	cin >> x >> y >> z;
	switch(z){
		case '+':
			cout << x+y;
			break;
		case '-':
			cout << x-y;
			break;
		case '*':
			cout << x*y;
			break;
		case '/':
			if(y==0)
				cout << "Divided by zero!" << endl;
			else 
				cout << x/y;
			break;
		default:
			cout << "Invalid operator!"	<< endl;					
	}
		
 	
 	return 0;
 }
