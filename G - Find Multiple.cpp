#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    int a,b,c,cnt=0;
    cin>>a>>b>>c;

    for(int i=a;i<=b;i++){
        if(i%c==0){
            cnt=i;
            break;}

    }
    if(cnt==0)
        cnt=-1;
    cout<<cnt;
    return 0;
}
