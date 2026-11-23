#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a, b, c; cin >> a >> b >> c;
    cout << fixed << setprecision(12) << (a / (b + c)) * b;
}