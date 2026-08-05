#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, c;
    while(cin >> n >> m >> c && n != 0){
        int extra = c == 1 ? 1 : 0;
        cout << ((n - 7) * (m - 7) + extra)/2 << '\n';
    }
}