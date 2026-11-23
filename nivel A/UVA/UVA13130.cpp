#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ant, x; cin >> n;
    bool valido;
    while(n--){
        valido = 1;
        for(int i = 0; i < 5; i++){
            cin >> x;
            if(i){
                if(x != ant + 1) valido = 0;
            }
            ant = x;
        }

        cout << (valido ? "Y\n" : "N\n");
    }
}