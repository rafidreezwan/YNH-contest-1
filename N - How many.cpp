#include<iostream>
using namespace std;
int main(){
    int s, t, cont = 0;
    cin >> s;
    cin >> t;
    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            for(int k = 0; k <= 100; k++){
                if(i + j + k <= s && i * j * k <= t)
                    cont++;
            }
        }
    }
    cout << cont << '\n';
    return 0;
}
