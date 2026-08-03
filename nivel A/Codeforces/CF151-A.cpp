#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int t1 = (k * l)/nl;
    int t2 = c * d;
    int t3 = p/np;
    int x = min(min(t1, t2), t3);

    x /= n;
    cout << x;
}