#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int r;
    for(int i = 0; i < n; i++){
        r = 0;
        for(int j = 0; j < n; j++){
            if(v[j] != v[i] && v[j] > v[i])
                r++;
        }
        cout << 1 + r << " ";
    }
}