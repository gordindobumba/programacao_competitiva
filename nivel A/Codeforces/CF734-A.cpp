#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string games;
    int n, a = 0, d = 0;

    cin >> n >> games;

    for(int i = 0; i < n; i++){
        if(games[i] == 'A') a++;
        else d++;
    }

    if(a > d) cout << "Anton";
    else if(a < d) cout << "Danik";
    else cout << "Friendship";
}