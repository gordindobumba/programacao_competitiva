#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, f; cin >> n >> f;
    vector<pair<ll, ll>> days;
    int k[n], l[n];

    for(int i = 0; i < n; i++){
        cin >> k[i] >> l[i];
        days.push_back({min(2*k[i], l[i]) - min(k[i], l[i]), i});
    }

    sort(days.rbegin(), days.rend());

    ll sum = 0;
    for(int i = 0; i < f; i++){
        int pos = days[i].second;
        sum += min(2*k[pos], l[pos]);
    }

    for(int i = f; i < n; i++){
        int pos = days[i].second;
        sum += min(k[pos], l[pos]);
    }

    cout << sum;
}