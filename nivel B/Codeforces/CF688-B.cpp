#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n; cin >> n;
    string n2 = n;
    reverse(n2.rbegin(), n2.rend());

    cout << n + n2;
}