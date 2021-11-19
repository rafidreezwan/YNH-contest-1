#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    int a,b,x,y,z;
    cin>>a>>b;

    x=a+b;
    y=a+(a-1);
    z=b+(b-1);

    if(x>y&&x>z)
        cout<<x;
    else if(y>z&&y>x)
        cout<<y;
    else if(z>x&&z>y)
        cout<<z;
    else if(x==y && x==z)
        cout<<x;
    else if(x==y && x>z)
        cout<<x;
    else if(z==y && z>x)
        cout<<z;
    else if (x==z && x>y)
        cout<<x;


return 0;
}
