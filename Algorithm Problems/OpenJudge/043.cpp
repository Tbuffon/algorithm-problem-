 #include <iostream>
 #include <cstdio>
 #include <cstring>
 using namespace std;
 char a[200][101] = {0};
 
 int main(){
 	int i = 0;
 	int mini = 0,maxi = 0;
 	int min = 102,max = 0;
 	while(cin>>a[i]){
 		int len = strlen(a[i]);
 		if(len > max){
 			max = len;
 			maxi = i;
		 }
		if(len < min){
			min = len;
			mini = i;
		}
 		i++;
	 }
	cout <<a[maxi]<<endl;
	cout <<a[mini]<<endl;
 
 	return 0;
 }
//  #include <iostream>
// #include <cstring>
// #include <cstdio>
// using namespace std;
// char a[20001];
// char maxresult[101];
// char minresult[101];
// int main(){
// 
// 	fgets(a,20001,stdin);
// 	char * p = strtok(a," ,\n");
// 	int maxlength = 0;
// 	int minlength = 101;
//	strcpy(maxresult,p);
// 	strcpy(minresult,p);
// 	while(p != NULL){
// 		int x = strlen(p);
// 		if(maxlength < x){
// 			maxlength = x;
// 			strcpy(maxresult,p);
//		 }
//		if(minlength > x){
//			minlength = x;
//			strcpy(minresult,p);
//		}
//		p = strtok(NULL," ,\n");
//	 } 
//	 cout<<maxresult<<endl;
//	 cout<<minresult<<endl;
//	return 0;
// }
