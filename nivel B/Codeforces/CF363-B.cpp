#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> pref(n + 1, 0);
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + v[i - 1];
    }

    int best = 150000*100 + 5;
    int index = 1;
    for(int i = 0; i <= n - k; i++){
        if(pref[k + i] - pref[i] < best){
            best = pref[k + i] - pref[i];
            index = k + i;
        }
    }

    cout << index - (k - 1);
}