#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,N;
	cin >> N;
	cout << N << endl;
	a=N/100;
	cout << a <<" nota(s) de R$ 100,00" << endl;
	b= (N-(a*100))/50;
	cout << b << " nota(s) de R$ 50,00" << endl;
	c= (N-((a*100)+(50*b)))/20;
	cout << c <<" nota(s) de R$ 20,00" << endl;
	d = (N-((a*100)+(50*b)+(20*c)))/10;
	cout << d << " nota(s) de R$ 10,00" << endl;
	e = (N-((a*100)+(50*b)+(20*c)+(10*d)))/5;
	cout << e << " nota(s) de R$ 5,00" << endl;
	f=(N-((a*100)+(50*b)+(20*c)+(10*d)+(5*e)))/2;
	cout << f << " nota(s) de R$ 2,00" << endl;
	g=(N-((a*100)+(50*b)+(20*c)+(10*d)+(5*e)+(2*f)));
	cout << g << " nota(s) de R$ 1,00" << endl;
	
	return 0;

}
