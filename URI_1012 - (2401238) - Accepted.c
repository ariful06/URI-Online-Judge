#include <stdio.h>
 
int main() {
    double A,B,C,pi=3.14159;
    double tri,cir,trap,sqr,ract;
	scanf("%lf %lf %lf",&A,&B,&C);
	tri =0.5*A*C;
	cir = pi*C*C;
	trap = 0.5*(A+B)*C;
	sqr = B*B;
	ract = A*B;
	printf("TRIANGULO: %.3lf\n",tri);
	printf("CIRCULO: %.3lf\n",cir);
	printf("TRAPEZIO: %.3lf\n",trap);
	printf("QUADRADO: %.3lf\n",sqr);
	printf("RETANGULO: %.3lf\n",ract);
	return 0;
}