#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> res;
    for(int i = 0; i < 10; i++){
        int x; cin >> x;
        res.insert(x);
    }

    cout << 4 - (int)res.size();
}