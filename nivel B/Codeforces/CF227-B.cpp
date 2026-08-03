#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n;
    vector<int> pos(n + 1, 0);

    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        pos[a] = i;
    }

    cin >> m;
    ull v = 0, p = 0;
    for(int i = 0; i < m; i++){
        int b; cin >> b;
        v += pos[b];
        p += (n + 1) - pos[b];
    }

    cout << v << " " << p;
}