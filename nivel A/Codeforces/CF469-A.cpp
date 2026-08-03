#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, q, l;
    set<int> levels;
    cin >> n;
    cin >> p;
    while(p--){
        cin >> l;
        levels.insert(l);
    }
    cin >> q;
    while(q--){
        cin >> l;
        levels.insert(l);
    }

    int s = levels.size();
    if(s == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}