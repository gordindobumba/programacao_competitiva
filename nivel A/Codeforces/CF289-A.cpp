#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int l, r, x = 0;
    while(n--){
        cin >> l >> r;
        x += abs(r - l) + 1;
    }

    x %= k;
    if(x != 0){
        x = k - x;
    }

    cout << x;

}