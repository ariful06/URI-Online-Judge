#include <stdio.h>
 
int main() {
 
   int a,b;
	float sal,number;
	scanf("%d %d %f",&a,&b,&number);
	sal = number * b;
	printf("NUMBER = %d\n", a);
	printf("SALARY = U$ %.2f\n",sal);
	return 0;
}