#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull sums(ull v, int k){
    ull sum = 0;
    ull d = 1;

    while(v / d > 0){
        sum += v / d;
        d *= k;
    }

    return sum;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n;
    int k;
    cin >> n >> k;
    
    ull l = 0, r = 2 * n, m;
    while(l <= r){
        m = l + (r - l)/2;
        if(sums(m, k) >= n) r = m - 1;
        else l = m + 1;
    }

    cout << l;
}