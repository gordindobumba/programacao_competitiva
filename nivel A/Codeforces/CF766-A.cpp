#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;

    if(a.size() > b.size()){
        cout << a.size();
    }else if(b.size() > a.size()){
        cout << b.size();
    }else{
        if(a == b) cout << -1;
        else cout << a.size();
    }
}