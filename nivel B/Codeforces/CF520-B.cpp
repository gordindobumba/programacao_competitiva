#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    int c = 0;
    while(m > n){
        if(m % 2) ++m;
        else m /= 2;
        ++c;
    }

    cout << n - m + c;
}

// complexidade: O(log n)