#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    ull ans = 0;
    for(int i = 1; i <= n; i++){
        ull temp = i % 5;
        temp = (m + temp)/5;
        ans += temp;
    }

    cout << ans;
}