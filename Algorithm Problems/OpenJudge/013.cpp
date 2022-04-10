 #include <iostream>
 #include <cstdio>
 #include <math.h>
 using namespace std;
 
 int main(){
 	double a,b,c;
 	scanf("%lf %lf %lf", &a,&b,&c);
 	
 	double x = b*b-4*a*c;
 	double y = -b/(2*a);
// 	double z = sqrt(abs(x))/(2*a);
 	if(x==0){
 		printf("x1=x2=%.5lf",y);
	 }
	 else if(x > 0){
	 	printf("x1=%.5lf;x2=%.5lf", y + sqrt(x)/(2*a),y-sqrt(x)/(2*a));
	 }
	 else{
	 	if(b==0){
	 		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi",b,sqrt((-x))/(2*a),b,sqrt(-x)/(2*a));
		 }
		 else
	 	printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi",y,sqrt((-x))/(2*a),y,sqrt(-x)/(2*a));
	 }
 	
 	return 0;
 } 
