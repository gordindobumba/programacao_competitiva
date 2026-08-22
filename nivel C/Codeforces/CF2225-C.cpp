#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t, n; cin >> t;
    string table[2];
    while(t--){
        cin >> n;
        int res = 0;
 
        string table[2];
        cin >> table[0];
        cin >> table[1];
 
        int b1, b2;
 
        for(int j = 0; j < n; j++){
            b1 = (table[0][j] != table[1][j]);
            if(j < n - 1) b2 = (table[0][j] != table[0][j + 1]) + (table[1][j] != table[1][j + 1]);
            else b2 = 2;
            res += min(b1, b2);
            if(b2 < b1) j += 1;
        }
 
        cout << res << '\n';
    }
}