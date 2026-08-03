#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, c = 0;
    char color;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> color;
            if(color == 'C' || color == 'M' || color == 'Y') c = 1;
        }
    }

    cout << (c == 1 ? "#Color" : "#Black&White");
}