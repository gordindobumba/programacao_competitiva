#include <bits/stdc++.h>
using namespace std;

void testar(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b; cin >> n;
    while(n--){
        cin >> a >> b;
        cout << gcd(a, b) << '\n';
    }
}