#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    long long p, r, f, res;
    for(int i = 0; i < n; i++){
        res = 0;
        cin >> p >> r >> f;
        for(; p <= f; p *= r) res++;
        cout << res << '\n';
    }
}