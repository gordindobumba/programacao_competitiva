#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull sum(ull s){
    return (s * (s + 1))/2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n, k; 
    cin >> n >> k;
    --n; --k;

    ull s = sum(k);
    if(s < n) cout << -1;
    else{
        ull left = 0, right = k;
        while(left <= right){
            ull middle = left + (right - left)/2;
            if(s - sum(middle) >= n) left = middle + 1;
            else right = middle - 1;
        }
        cout << k - right;
    }
}