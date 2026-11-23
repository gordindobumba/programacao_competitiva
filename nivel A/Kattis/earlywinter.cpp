#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int res = -1;
    for(int i = 0; i < n; i++){
        if(v[i] <= m){
            res = i;
            break;
        }
    }

    if(res != -1)
        cout << "It hadn't snowed this early in " << res << " years!";
    else cout << "It had never snowed this early!";
}