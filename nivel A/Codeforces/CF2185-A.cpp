#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, i = 1;
    cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            cout << i << " ";
            i++;
        }
        cout << '\n';
        i = 1;
    }
}