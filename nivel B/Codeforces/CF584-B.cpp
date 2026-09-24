#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    ll t = 1, s = 1;
    for(int i = 0; i < 3 * n; i++)
        t = (t * 3) % MOD;
    

    for(int i = 0; i < n; i++)
        s = (s * 7) % MOD;
    

    cout << (t - s + MOD) % MOD;
}