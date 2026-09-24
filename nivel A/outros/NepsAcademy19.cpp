#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int t;
    char p;
    vector<pair<int, int>> pares(61, {0, 0});
    for(int i = 0; i < n; i++){
        cin >> t >> p;
        if(p == 'E') pares[t].f++;
        else pares[t].s++;
    }

    int res = 0;

    for(int i = 30; i <= 60; i++)
        res += min(pares[i].f, pares[i].s);
    
    cout << res;
}