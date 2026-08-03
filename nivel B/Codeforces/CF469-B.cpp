#include <bits/stdc++.h>
using namespace std;

vector<int> intervals(1005, 0);
vector<int> h;

bool test(int t){
    for(int i = 0; i < (int)h.size(); i++){       
        if(intervals[t + h[i]] && t + h[i] <= 1000) return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int p, q, l, r;
    cin >> p >> q >> l >> r;

    for(int i = 0; i < p; i++){
        int x, y; cin >> x >> y;
        for(int j = x; j <= y; j++){
            intervals[j] = 1;
        }
    }

    for(int i = 0; i < q; i++){
        int x, y; cin >> x >> y;
        for(int j = x; j <= y; j++){
            h.push_back(j);
        }
    }

    int res = 0;
    for(int i = l; i <= r; i++){
        if(test(i)) res++;
    }

    cout << res;
}