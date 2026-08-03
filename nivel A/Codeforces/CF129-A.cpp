#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, sum = 0, c; cin >> n;
    vector<int> cookies;

    for(int i = 0; i < n; i++){
        cin >> c;
        sum += c;
        cookies.push_back(c);
    }

    int q = 0;
    for(int i = 0; i < n; i++){
        if((sum - cookies[i]) % 2 == 0) q++;
    }

    cout << q;
}