 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
	int n = 81, x, y, z;
	for(;;n++){
		x = n%7;
		y = n/7%7;
		z = n/7/7;
		if(x*9*9 + y*9 + z == n){
			break;
		}
	}
	cout<< n <<endl;
	cout<< z << y << x <<endl;
	cout<< x << y << z <<endl;
 	return 0;
 }
