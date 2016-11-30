#include<iostream>
#include<math.h>

using namespace std;

int main (void)

{
    double x1,x2,y1,y2,result;

    cout .precision(4);

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    result =sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout << fixed << result << endl;
    return 0;
}