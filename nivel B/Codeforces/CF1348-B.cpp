#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> v;
        set<int> d;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
            d.insert(x);
        }

        if((int)d.size() > k) cout << -1 << '\n';
        else{
            cout << n * k << '\n';
            for(int i = 0; i < n; i++){
                for(auto x : d){
                    cout << x << " ";
                }

                for(int j = 0; j < k - (int)d.size(); j++){
                    cout << 1 << " ";
                }
            }
            cout << '\n';
        }
    }
}