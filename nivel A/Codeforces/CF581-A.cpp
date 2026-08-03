#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b; cin >> a >> b;

    int q = min(a, b);
    int m = max(a, b);
    cout << q << " " << (m - q)/2;
}