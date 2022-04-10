 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 int main(){
	int n;
	double teenager=0,younth=0,middle=0,old=0;
	scanf("%d", &n);
	int age[n];
	for(int i = 0; i < n ; i++ ){
		scanf("%d",&age[i]);
	}
	for(int i = 0; i < n ; i++ ){
		if(age[i]<=18 && age>=0){
			teenager++;
		}
		else if(age[i]>=19 && age[i]<=35){
			younth++;
		}
		else if(age[i]>=36 && age[i]<=60){
			middle++;
		}
		else{
			old++;
		}
	}
	printf("%.2lf%\n",teenager/n*100);
	printf("%.2lf%\n",younth/n*100);
	printf("%.2lf%\n",middle/n*100);
	printf("%.2lf%\n",old/n*100);
 	return 0;
 }
