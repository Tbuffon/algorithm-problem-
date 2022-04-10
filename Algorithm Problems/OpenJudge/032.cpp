 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 
 int main(){
	int a[5][5];
	int point,flag,flag2 = 1;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			point = a[i][j];
			flag = 0;
			for(int k = 0; k < 5; k++){
				if(a[i][k] > point){
					flag = 1;
					break;
				}
					
				if(a[k][j] < point){
					flag = 1;
					break;
				}
			
			}
			if(flag == 0){
				cout << i+1 <<" "<< j+1 << " "<< point << endl;
				flag2 = 0;
			}	
		}
	}
	if(flag2!=0){
		cout<<"not found" << endl;
	}
 	return 0;
 }
 
