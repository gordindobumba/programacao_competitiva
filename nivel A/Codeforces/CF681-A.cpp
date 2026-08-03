#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    string res = "NO";
    while(n--){
        string name;
        int b, a;
        cin >> name >> b >> a;
        if(b >= 2400 && a > b) res = "YES";
    }
    cout << res;
}