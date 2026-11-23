#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int c, k, t;
    cin >> t >> c >> k;
    cout << min(c, t * k) << '\n';
}