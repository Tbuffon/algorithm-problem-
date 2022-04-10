 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 int main(){
 	int n,x,y;
 	cin >> n >> x >> y;
 	int sum = y/x;
 	if(y%x != 0){
 		sum++;
	 }
	int result = n-sum;
	if(result>0)
		cout << result << endl;
	else
		cout << 0 << endl;
		
	
 	return 0;
 }
