#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define vi vector<int>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vi og(n);

    for(int i = 0; i < n; i++){
        cin >> og[i];
    }

    vi sorted = og;
    sort(sorted.begin(), sorted.end());

    vector<ull> v(n + 1, 0), u(n + 1, 0);
    for(int i = 1; i <= n; i++){
        v[i] = v[i - 1] + og[i - 1];
        u[i] = u[i - 1] + sorted[i - 1];
    }

    int m; cin >> m;
    
    while(m--){
        int a, l, r;
        cin >> a >> l >> r;
        if(a == 1) cout << v[r] - v[l - 1];
        else cout << u[r] - u[l - 1];

        cout << '\n';
    }
}