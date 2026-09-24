#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        vector<int> v2;

        int l = 0, r = n - 1;
        while(l <= r){
            if(l != r){
                v2.push_back(v[l]);
                v2.push_back(v[r]);
            }
            else v2.push_back(v[l]);

            l++; r--;
        }

        for(int i = n - 1; i >= 0; i--){
            cout << v2[i] << " ";
        }
        cout << '\n';
    }
}