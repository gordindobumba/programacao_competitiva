#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, k;
    cin >> n >> k;
    if(n % 2 == 0){
        if(k <= n / 2) cout << 2*k - 1;
        else{
            k -= n/2;
            cout << 2*k;
        }
    }else{
        if(k <= n/2 + 1) cout << 2*k - 1;
        else{
            k -= n/2 + 1;
            cout << 2*k;
        }
    }
}