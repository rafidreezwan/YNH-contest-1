#include <iostream>
#include <cmath>
#include <iomanip>
//using namespace std ;
int main()
{
    long double a,b,x,y;
    std::cin>>a>>b;

   x=(b*100)/a;
    y=100-x;
         std::cout << std::setprecision(18) << y << '\n';
    return 0;
}
