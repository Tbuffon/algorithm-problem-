 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 int main(){
 	int n;
 	cin >> n;
 	int a[n][2];
 	for(int i=0; i<n; i++){
 		cin >> a[i][0] >> a[i][1];
	 }
	
	double x = double(a[0][1])/a[0][0];
 	for(int i = 1; i < n; i++){
 		double y = (double)a[i][1]/a[i][0];
 		if(y-x > 0.05){
 			cout<< "better" <<endl;
		 }
		else if(x-y > 0.05){
			cout << "worse" << endl;
		}
		else{
			cout << "same" << endl;
		}
	 }
 	return 0;
 }
