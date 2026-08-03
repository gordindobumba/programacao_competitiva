#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n; cin >> n;
    string num = to_string(n);
    long long q = 0;
    for(char c : num){
        if(c == '4' || c == '7') q++;
    }

    if(q == 4 || q == 7) cout << "YES";
    else cout << "NO";
}