#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n, w; cin >> k >> n >> w;
    cout << max(0, k*((w*(w + 1))/2) - n);
}