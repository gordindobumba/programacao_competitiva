#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    int a, b, t = 1;

    cin >> n >> x;
    int base = 7 - x;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(i > 0){
            if(a == base || b == base || 7 - a == base || 7 - b == base) t = 0;
        }
    }

    cout << (t == 1 ? "YES" : "NO");
}