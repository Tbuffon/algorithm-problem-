 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
	int apple[10],MaxHeight,count = 0;
	for(int i = 0; i < 10; i++){
		cin >> apple[i];
	}
	cin >> MaxHeight;
	for(int i = 0; i < 10; i++){
		if(apple[i]<=MaxHeight+30){
			count++;
		}
	}
	cout<< count <<endl;
 	return 0;
 }
