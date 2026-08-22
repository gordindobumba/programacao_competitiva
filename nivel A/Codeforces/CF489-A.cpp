#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> v2 = v;
    sort(v2.begin(), v2.end());

    vector<pair<int, int>> swaps;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(v2[i] == v[j]){
                int t = v[j];
                v[j] = v[i];
                v[i] = t;
                swaps.push_back({i, j});
                break;
            }
        }
    }

    cout << swaps.size() << '\n';
    for(auto x : swaps){
        cout << x.first << " " << x.second << '\n';
    }
}