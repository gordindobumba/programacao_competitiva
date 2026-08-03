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
    
    ull ans = n;
    int top = n, bottom = 1;
    while(bottom <= top){
        ull middle = bottom + (top - bottom) / 2;
        if(sums(middle, k) >= n){
            ans = middle;
            top = middle - 1;
        }else{
            bottom = middle + 1;
        }
    }

    cout << ans;
}