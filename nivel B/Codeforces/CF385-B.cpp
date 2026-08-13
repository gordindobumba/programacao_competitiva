#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    int n = s.size();
    long long res = 0;
    int last_id = 0;
    for(int i = 0; i < n - 3; i++){
        if(s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r'){
            res += (i + 1)*(n - (i + 3));
            res -= last_id*(n - (i + 3));
            last_id = i + 1;
        }
    }

    cout << res;
}