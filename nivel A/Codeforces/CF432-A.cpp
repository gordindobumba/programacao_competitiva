#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    int x, res = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x + k <= 5) res++;
    }

    cout << res / 3;
}