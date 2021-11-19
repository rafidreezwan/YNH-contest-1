#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    double x,n;

    cin>>x;
    n=x- floor(x);
    if(n<.5)
        cout<<floor(x);
        else
            cout<<ceil(x);
return 0;
}
