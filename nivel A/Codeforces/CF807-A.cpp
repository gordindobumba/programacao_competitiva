#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b, t = 0;
    int r[1005];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a != b){
            t = 1;
        }
        r[i] = a;
    }

    if(t == 1) cout << "rated";
    else{
        int t2 = 0;
        for(int i = 0; i < n - 1; i++){
            if(r[i] < r[i + 1]) t2 = 1;
        }

        if(t2) cout << "unrated";
        else cout << "maybe";
    }
}