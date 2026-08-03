#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<int, int>> laptop;

    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        laptop.push_back(make_pair(a, b));
    }

    sort(laptop.begin(), laptop.end());
    int t = 0;
    for(int i = 0; i < n - 1; i++){
        if(laptop[i].second > laptop[i + 1].second) t = 1;
    }

    cout << (t == 1 ? "Happy Alex" : "Poor Alex");
}