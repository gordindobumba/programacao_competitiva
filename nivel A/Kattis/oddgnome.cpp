#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n; cin >> t;
    while(t--){
        cin >> n;
        int index;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < n; i++){
            if(i){
                if(v[i] != v[i - 1] + 1){
                    index = i + 1;
                    break;
                }
            }
        }

        cout << index << '\n';
    }
}