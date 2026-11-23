#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k; cin >> k;
    bool has9 = false;
    int res = INT_MAX, x;

    for(int i = 0; i < k; i++){
        cin >> x;
        if(x == 9) has9 = true;
        res = min(res, x);
    }

    cout << (has9 ? res : -1);
}