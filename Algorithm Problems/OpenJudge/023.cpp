 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 int main(){
 	int n;
	cin >> n;
	int max = 0;
	int a,b,count = 0;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		if(a>=90&&a<=140&&b>=60&&b<=90){
			count++;
			if(count > max){
				max = count;
			}
		}
		else{
			count = 0;
		}
	}
	cout << max <<endl;
 	return 0;
 }
