#include <bits/stdc++.h>
using namespace std;

bool test(int d, vector<int> idx, int s){
    int p = 0;
    for(int i = 0; i < s; i++){
        if(p + d < idx[i]) return false;
        p = idx[i];
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        vector<int> idx;
        for(int i = 0; i < n; i++){
            if(s[i] == 'R') idx.push_back(i + 1);
        }
        idx.push_back(n + 1);
        int i = idx.size();

        int l = 1, r = n + 1;
        while(l <= r){
            int m = l + (r - l)/2;
            if(test(m, idx, i)) r = m - 1;
            else l = m + 1;
        }

        cout << l << '\n';
    }
}

/*



*/