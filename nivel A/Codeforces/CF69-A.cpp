#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    int v, v1 = 0, v2 = 0, v3 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> v;
            if(j == 0) v1 += v;
            else if(j == 1) v2 += v;
            else v3 += v;
        }
    }

    if(v1 == 0 && v2 == 0 && v3 == 0) cout << "YES";
    else cout << "NO";
}