#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, sum = 0; cin >> t;
    string op;
    while(t--){
        cin >> op;
        if(op == "donate"){
            cin >> n;
            sum += n;
            continue;
        }
        cout << sum << '\n';
    }
}