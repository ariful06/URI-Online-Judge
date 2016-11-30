#include <stdio.h>
 
int main() {
 
double fix,sold,TOTAL;
char name[100];


scanf("%s",&name);
scanf("%lf",&fix);
scanf("%lf",&sold);
TOTAL=(fix)+(sold*0.15);
printf("TOTAL = R$ %.2lf\n",TOTAL);
return 0;
}