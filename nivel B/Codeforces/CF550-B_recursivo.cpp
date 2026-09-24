#include <bits/stdc++.h>
using namespace std;

#define sz(v) (int)v.size()

vector<int> v, s;
int n, l, r, x;
int p = 0, sum = 0;

void search(int k){
    if(k == n){
        if(sz(s) < 2) return;
        
        if(sum > r || sum < l) return;
        int siz = sz(s);
        if(s[siz - 1] - s[0] < x) return;
        
        p++;
    }
    else{
        search(k + 1);
        
        sum += v[k];
        s.push_back(v[k]);
        search(k + 1);

        int siz = sz(s);
        sum -= s[siz - 1];
        s.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> l >> r >> x;

    for(int i = 0; i < n; i++){
        int e; cin >> e;
        v.push_back(e);
    }

    sort(v.begin(), v.end());

    search(0);
    cout << p;
}