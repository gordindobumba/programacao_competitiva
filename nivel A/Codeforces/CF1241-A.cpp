#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        if(n < 4) cout << 4 - n;
        else if(n % 2) cout << 1;
        else cout << 0;

        cout << '\n';
    }
}