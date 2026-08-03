#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d > c) cout << (d - c - 1)*(a + 2*b) + 2*b;
    else cout << (c - d - 1)*(a + 2*b) + 2*a + 2*b;
}