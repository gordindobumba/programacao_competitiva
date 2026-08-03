#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int d = 1 + (2*n)*4;
    int m = sqrt(d);
    cout << (m*m == d ? "YES" : "NO");
}