 #include <iostream>
 using namespace std;
 
 #define P 3.14
 
 int main(){
 	double r;
 	scanf("%lf",&r);
 	double v = (double)4/3 * P * r * r * r;
 	printf("%.2lf",v);
 	return 0;
 }
