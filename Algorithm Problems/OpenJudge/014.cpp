 #include <iostream>
 #include <cstdio>
 #include <cmath>
 using namespace std;
 
 int main(){
 	int x,y;
 	cin >> x >> y;
 	if(abs(x)<=1 && abs(y) <= 1)
 		cout << "yes" << endl;
 	else cout << "no" << endl;
 	
 	return 0;
 }
