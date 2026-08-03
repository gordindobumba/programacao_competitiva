#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string colors = "ROIYGBV";
    string addon = "YGBV";

    int i = (n - 7)/4;
    for(int j = 0; j < i; j++){
        colors += addon;
    }

    int m = (n + 1) % 4;
    string extra = addon.substr(0, m);
    colors += extra;
    cout << colors;
}