#include <stdio.h>
 
int main() {
 
    int R;
	double vol,pi=3.14159;
	
	scanf("%d",&R);
	vol = (4.0/3)*pi*R*R*R;
	printf("VOLUME = %.3lf\n",vol);
	return 0;
}