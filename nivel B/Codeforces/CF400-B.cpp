#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;

    set<int> diffs;
    char c;
    bool broken = false;

    for(int i = 0; i < n; i++){
        int pos_g = 0;
        int pos_s = 0;
        for(int j = 0; j < m; j++){
            cin >> c;
            if(c == 'G') pos_g = j;
            else if(c == 'S') pos_s = j;
        }

        if(pos_s - pos_g < 0){
            cout << -1;
            broken = true;
            break;
        }
        else diffs.insert(pos_s - pos_g);
    }

    if(!broken){
        cout << diffs.size();
    }
}