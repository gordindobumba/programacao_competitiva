#include <bits/stdc++.h>
using namespace std;

const int MOD = 1073741824;
vector<int> d(1000001, 1);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c; cin >> a >> b >> c;

    for(int i = 2; i <= 1000000; i++){
        for(int j = i; j <= 1000000; j += i){
            d[j]++;
        }
    }
    
    long long res = 0;

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                res += d[i*j*k];
            }
        }
    }
    
    cout << res % MOD;
}