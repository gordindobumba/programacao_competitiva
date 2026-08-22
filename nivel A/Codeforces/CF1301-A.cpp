#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--){
        string a, b, c; cin >> a >> b >> c;
        bool t = true;
        int s = a.size();

        for(int i = 0; i < s; i++){
            if(a[i] != c[i] && b[i] != c[i]){
                t = false;
                break;
            }
        }

        cout << (t ? "YES\n" : "NO\n");
    }
}