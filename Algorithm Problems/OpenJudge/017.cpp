 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 int main(){
 	int n;
 	scanf("%d",&n);
 	int a[n];
 	for(int i = 0; i < n; i++){
 		scanf("%d", &a[i]);
	 }
	int sum = 0;
	double average;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	average = double(sum)/n;
	printf("%d %.5lf", sum, average);
 	return 0;
 }
