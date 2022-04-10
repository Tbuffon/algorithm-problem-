 #include <iostream>
 #include <cstdio>
 #include <cstring>
 using namespace std;
 
 char a[100001]={0};
 int letter[26] = {0};
 
 int main(){
	cin >> a;
	int flag = 0;
	int len = strlen(a);
	for(int i = 0; i < len; i++){
		letter[a[i]-97]++;
	}
	for(int i = 0; i < len; i++){
		if(letter[a[i]-97] == 1){
			flag = 1;
			cout << a[i]<<endl;
			break;
		}
	}
	if(flag == 0)
	{
		cout << "no"<<endl;
	}
 	return 0;
 }
