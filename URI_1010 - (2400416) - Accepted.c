#include <stdio.h>
 
int main() {
 
   int a,b,c,d;
	float x,y,pay;
	scanf("%d %d %f",&a,&b,&x);
	scanf("%d %d %f",&c,&d,&y);
	pay=(b*x)+(d*y);
	printf("VALOR A PAGAR: R$ %.2f\n",pay);
	return 0;
}