#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2; cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    cout << (s1 == s2 ? "YES" : "NO");
}