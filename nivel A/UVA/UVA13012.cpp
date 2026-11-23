#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    test();

    int n, t, res;
    while(cin >> n && n){
        res = 0;
        for(int i = 0; i < 5; i++){
            cin >> t;
            if(t == n) res++;
        }

        cout << res << '\n';
    }
}