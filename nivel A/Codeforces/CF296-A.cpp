#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> el;

    for(int i = 0; i < n; i++){
        int p; cin >> p;
        el.push_back(p);
    }

    int m = (n % 2 == 0 ? n/2 : n/2 + 1);
    int t = 1;
    for(int i = 0; i < n; i++){
        if(count(el.begin(), el.end(), el[i]) > m){
            t = 0;
            break;
        }
    }

    cout << (t == 1 ? "YES" : "NO");
}