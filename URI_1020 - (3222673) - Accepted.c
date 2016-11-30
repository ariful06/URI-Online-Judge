#include<stdio.h>
#include<math.h>
int main()
{
	int years,months,days,n;
	scanf("%d",&n);
	years=n/365;
	months=(n-(365*years))/30;
	days=(n-(years*365+30*months));
	printf("%d ano(s)\n",years);
	printf("%d mes(es)\n",months);
	printf("%d dia(s)\n",days);
	return 0;
}