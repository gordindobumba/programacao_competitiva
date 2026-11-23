#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a = 1000001, b = -1000001, x, t = 1;
    while(cin >> n && n){
        for(int i = 0; i < n; i++){
            cin >> x;
            a = min(a, x);
            b = max(b, x);
        }

        cout << "Case " << t++ << ": " << a << " " << b << " " << b - a << '\n';
        a = 1000001, b = -1000001;
    }
}