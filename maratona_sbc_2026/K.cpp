#include <bits/stdc++.h>
using namespace std;

#define loop(j, v) for(int i = j; i < v; i++)

bool comp(pair<int, int> a, pair<int, int> b){
    return (a.first - a.second) < (b.first - b.second);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v1(n), v2(n);

    loop(0, n) cin >> v1[i];
    loop(0, n) cin >> v2[i];

    vector<pair<int, int>> robos;

    loop(0, n){
        if(v2[i] > v1[i]){
            cout << -1 << '\n';
            return 0;
        }
        robos.push_back({v1[i], v2[i]});
    }

    sort(robos.rbegin(), robos.rend(), comp);
    int res = 0;
    loop(0, n - 1) res += robos[i].first;
    
    cout << res + robos[n - 1].second << '\n';
}