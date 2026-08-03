#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int res = 0;
    string exp;
    while(n--){
        cin >> exp;
        if(exp[1] == '+') ++res;
        else --res;
    }
    cout << res;
}