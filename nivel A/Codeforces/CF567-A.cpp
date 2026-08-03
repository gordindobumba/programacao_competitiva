#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int x[n] = {0};
    int c;

    for(int i = 0; i < n; i++){
        cin >> c;
        x[i] = c;
    }

    for(int i = 0; i < n; ++i){
        int mx = max(abs(x[i] - x[0]), abs(x[i] - x[n - 1]));
        int mn;
        if(i == 0){
            mn = abs(x[i] - x[i + 1]);
        }
        else if(i == n - 1){
            mn = abs(x[n - 1] - x[n - 2]);
        }
        else{
            mn = min(abs(x[i] - x[i - 1]), abs(x[i] - x[i + 1]));
        }
        
        cout << mn << ' ' << mx << '\n';
    }
}