#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> l(n), r(n);

    for(int i = 0; i < n; i++){
        cin >> l[i];
        cin >> r[i];
    }

    int a = 0, b = 0, res = 0;
    for(int i = 0; i < n; i++){
        if(l[i]) a++;
        else b++;
    }

    res = min(n - a, n - b);
    a = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(r[i]) a++;
        else b++;
    }

    res += min(n - a, n - b);
    cout << res;
}