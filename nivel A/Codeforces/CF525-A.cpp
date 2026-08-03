#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0; cin >> n;
    string rooms;
    
    n = 2*(n - 1);
    cin >> rooms;
    map<char, int> keys;

    for(int i = 0; i < n; i++){
        char c = rooms[i];
        if(islower(c)) keys[c]++;
        else{
            c = tolower(c);
            if(keys[c] > 0) keys[c]--;
            else ans++;
        }
    }
    
    cout << ans;
}