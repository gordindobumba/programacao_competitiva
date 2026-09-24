#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n; cin >> n;
    cout << (n*(n - 3)*(n - 2)*(n - 1))/24 + (n*(n - 1))/2 + 1 << '\n';
}