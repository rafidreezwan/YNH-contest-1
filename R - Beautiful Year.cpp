#include<iostream>
using namespace std;
int main(){
int n,z;
cin>>n;


    for(int i = 1; i <= 9; i++){

        for(int j = 0; j <= 9; j++){
            for(int k = 0; k <= 9; k++){
                for(int m = 0; m <= 9; m++){

                if(((i!=j)&&(i!=k)&&(i!=m))&&((j!=k)&&(j!=m))&&(k!=m)){
                   z= (i*1000+j*100+k*10+m);
                    if(z>n){
                        i=j=k=m=10;}
                   }


            }
        }
    }}
     cout <<z<< '\n';

    return 0;
}
