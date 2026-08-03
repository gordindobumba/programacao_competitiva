#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string middle(n, 'D');
    string top = "", bottom = "";

    for(int i = (n/2) - 1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if(j > i && j < n - 1 - i) top += "D";
            else top += "*";
        }
        top += '\n';
    }

    for(int i = 0; i < n/2; i++){
        bottom += '\n';
        for(int j = 0; j < n; j++){
            if(j > i && j < n - 1 - i) bottom += "D";
            else bottom += "*";
        }
    }

    string res = top + middle + bottom;
    cout << res;
}