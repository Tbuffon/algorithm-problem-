 #include <iostream>
 #include <cstdio>
 #include <cstring>
 using namespace std;
 
 char a[3][10] = {"Rock", "Scissors", "Paper"};
 char output[3][10]={"Tie","Player1","Player2"};\
 int result[3][3] = {{0,1,2},{2,0,1},{1,2,0}};
 
 int main(){
	int n;
	char s1[10], s2[10];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s1 >> s2;
		int x,y;
		for(int j=0;j<3;j++){
			if(strcmp(s1,a[j])==0){
				x = j;
			}
		}
		for(int k = 0; k < 3; k++){
			if(strcmp(s2,a[k])==0){
				y = k;
			}
		}
		cout <<output[result[x][y]] <<endl;
	}
	
 	return 0;
 }
