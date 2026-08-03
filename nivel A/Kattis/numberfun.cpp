#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        float x = max(a, b), y = min(a, b);

        if(x + y == c || x - y == c || x * y == c || x / y == c) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}