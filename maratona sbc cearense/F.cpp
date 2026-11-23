#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> coconuts;

int groups(int k){
    int s = coconuts.size(), g = 0;
    ll m = coconuts[0];
    for(int i = 0; i < s; i++){
        if(i == s - 1){
            g++;
            break;
        }

        if(m + coconuts[i + 1] > k){
            g++;
            m = coconuts[i + 1];
        }
        else m += coconuts[i + 1];
    }

    return g;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    coconuts.resize(n);
    ll l = 0, r = 0;

    for(int i = 0; i < n; i++){
        cin >> coconuts[i];
        l = max((ll)coconuts[i], l);
        r += coconuts[i];
    }

    while(l <=  r){
        ll m = l + (r - l)/2;
        if(groups(m) <= k) r = m - 1;
        else l = m + 1;
    }

    cout << l;
}