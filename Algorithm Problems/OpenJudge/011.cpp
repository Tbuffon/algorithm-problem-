 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 #define Pi 3.14159
 
 int main(){
	int h,r;
	scanf("%d %d",&h,&r);
	double sum = Pi*r*r*h;
	int num = 20*1000/sum + 1;
	printf("%d", num);
 	return 0;
 }
