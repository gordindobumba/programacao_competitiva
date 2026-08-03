#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l, r, a;
    cin >> l >> r >> a;
    while(a > 0){
        if(l >= r) r += 1;
        else l += 1;
        a--;
    }

    cout << min(l, r) * 2;
}