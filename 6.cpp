#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cout<<"Enter a,b,c";
    cin>>a>>b>>c;
    r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    r2 =  (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots of quadratic equations are "<<r1<<"  4 5 6 "<<r2;
    return 0;
}