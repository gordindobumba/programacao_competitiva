#include <bits/stdc++.h>
using namespace std;

int mod_pow(int b, int p, int m){
    if(p == 0) return 1 % m;
    if(p % 2 == 1) return ((b % m) * (mod_pow(b, p - 1, m) % m)) % m;

    return (mod_pow(b, p/2, m) * mod_pow(b, p/2, m)) % m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int b, p, m;
    while(cin >> b){
        cin >> p >> m;
        cout << mod_pow(b, p, m) << '\n';
    }
}