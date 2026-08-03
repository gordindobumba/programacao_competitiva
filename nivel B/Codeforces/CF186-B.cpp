#include <bits/stdc++.h>
using namespace std;

bool comp(pair<double, int> a, pair<double, int> b){
    if(a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    double percent = k/100.0;
    vector<pair<double, int>> ranks;

    for(int i = 1; i <= n; i++){
        int a, b; cin >> a >> b;

        double v1 = t1 * a * (1.0 - percent)+ t2 * b;
        double v2 = t1 * b * (1.0 - percent)+ t2 * a;

        if(v1 >= v2) ranks.push_back({v1, i});
        else ranks.push_back({v2, i});
    }

    sort(ranks.rbegin(), ranks.rend());

    for(auto rank : ranks)
        cout << rank.second << " " << fixed << setprecision(2) << rank.first << '\n';
}