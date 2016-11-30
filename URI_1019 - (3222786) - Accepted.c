#include<stdio.h>
#include<math.h>

int main()
{
	int h,m,s,N;
	scanf("%d",&N);
	h=N/3600;
	m=(N-(3600*h))/60;
	s=(N-(h*3600+60*m));
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}