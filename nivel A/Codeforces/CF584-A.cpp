#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    string zeros = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    if(n == 1) cout << (t == 10 ? -1 : t);
    else{
        if(t == 10) t /= 10;
        string t_zeros = zeros.substr(0, n - 1);
        string number = to_string(t) + t_zeros;
        cout << number;
    }
}