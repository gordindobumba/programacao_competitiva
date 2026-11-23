#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int max_h[10005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l, h, r;
    int max_r = 0;

    while(cin >> l >> h >> r){
        for(int i = l; i < r; i++)
            if(h > max_h[i]) max_h[i] = h;
        
        if(r > max_r) max_r = r;
    }

    int last = 0;
    vector<int> ans;
    for(int i = 0; i < max_r + 1; i++){
        if(max_h[i] != last){
            ans.push_back(i);
            ans.push_back(max_h[i]);
            last = max_h[i];
        }
    }

    cout << ans[0];
    for(int i = 1; i < (int)ans.size(); i++){
        cout << " " << ans[i];
    }
    cout << '\n';
}