#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    int a,b,c,d,x,n;
   cin>>x;
  d=x%10;
  x=x/10;
  c=x%10;
  x=x/10;
  b=x%10;
  x=x/10;
  a=x;
  //n=a*1000+b*100+c*10+d;
            cout<<a<<b<<c<<d;
return 0;
}
