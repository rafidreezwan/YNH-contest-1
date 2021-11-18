#include<iostream>
using namespace std;
int main(){
    int s, t, cont = 0;
    cin >> s;
    cin >> t;
    for(int i = 0; i <= s; i++){

        for(int j = 0; j <= s; j++){
                int b=(t-(i+j));
            if(b>=0&&s>=b)
                    cont++;
            }
        }

    cout << cont << '\n';
    return 0;
}
