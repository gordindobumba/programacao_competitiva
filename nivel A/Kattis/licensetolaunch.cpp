#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d; cin >> n;
    int m = INT_MAX, res;
    for(int i = 0; i < n; i++){
        cin >> d;
        if(d < m){
            m = d;
            res = i;
        }
    }

    cout << res;
}