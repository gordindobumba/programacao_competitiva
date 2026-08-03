#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

ull absol(ull a, ull b){
    if(a > b) return a - b;
    return b - a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull l, r;

    cin >> l >> r;
    if(l % 2 != 0) ++l;
    if(absol(l, r) < 2) cout << -1;
    else cout << l << " " << l + 1 << " " << l + 2;

}