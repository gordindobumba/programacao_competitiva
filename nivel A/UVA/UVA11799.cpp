#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, x, r = 0; cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> x;
            r = max(r, x);
        }
        cout << "Case " << i << ": " << r << '\n';
        r = 0;
    }
}