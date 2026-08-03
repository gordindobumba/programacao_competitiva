#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string dir; cin >> dir;
    int p; cin >> p;
    int p1;

    int best = INF;
    for(int i = 1; i < n; i++){
        cin >> p1;
        if(dir[i] == 'L' && dir[i - 1] == 'R'){
            int t = (p + p1)/2 - p1;
            best = min(best, t);
        }
        p = p1;
    }

    cout << (best == INF? -1 : best);
}