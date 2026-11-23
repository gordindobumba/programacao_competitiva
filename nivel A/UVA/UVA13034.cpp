#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n; cin >> t;
    bool zero;
    for(int i = 1; i <= t; i++){
        zero = 0;
        for(int j = 0; j < 13; j++){
            cin >> n;
            if(n == 0) zero = 1;
        }

        cout << "Set #" << i << ": " << (zero ? "No\n" : "Yes\n");
    }
}