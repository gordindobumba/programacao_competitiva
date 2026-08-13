#include <bits/stdc++.h>
using namespace std;

int groups(int k, vector<int> coconuts){
    int s = coconuts.size(), g = 0;
    long long int m = coconuts[0];
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
    vector<int> coconuts(n);
    long long int l = 0, r = 0;

    for(int i = 0; i < n; i++){
        cin >> coconuts[i];
        l = max((long long int)coconuts[i], l);
        r += coconuts[i];
    }

    while(l <=  r){
        long long int m = l + (r - l)/2;
        if(groups(m, coconuts) <= k) r = m - 1;
        else l = m + 1;
    }

    cout << l;
}