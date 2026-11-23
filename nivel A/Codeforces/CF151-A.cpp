#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int m1 = (k * l) / nl, m2 = p / np, m3 = c * d;
    cout << min(min(m1, m2), m3) / n;
}