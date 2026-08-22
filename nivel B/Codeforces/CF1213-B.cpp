#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> dias(n);
        for(int i = 0; i < n; i++) cin >> dias[i];

        int pivo = dias[n - 1], res = 0;
        for(int i = n - 2; i >= 0; i--){
            if(dias[i] > pivo) ++res;
            else pivo = dias[i];
        }

        cout << res << '\n';
    }
}