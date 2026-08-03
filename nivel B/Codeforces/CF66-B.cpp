#include <bits/stdc++.h>
using namespace std;

vector<int> V;
int n;

int scan_left(int i){
    int p = V[i], r = 0;
    while(1){
        if(i - 1 >= 0 && V[i - 1] <= p){
            r++;
            p = V[i - 1];
            i--;
        }
        else break;
    }
    return r;
}

int scan_right(int i){
    int p = V[i], r = 0;
    while(1){
        if(i + 1 < n && V[i + 1] <= p){
            r++;
            p = V[i + 1];
            i++;
        }
        else break;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    V.resize(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    int w = 0, best = 0;
    for(int i = 0; i < n; i++){
        w = 1 + scan_left(i) + scan_right(i);
        best = max(best, w);
    }

    cout << best;
}