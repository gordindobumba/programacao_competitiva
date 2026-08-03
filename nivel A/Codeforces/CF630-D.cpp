#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n; cin >> n;
    ull x = 1 + 6*((n*(n + 1))/2);
    cout << x;
}