#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q; cin >> q;
    while(q--){
        map<int, int> als, excecao;
        vector<int> ids;
        int n, id, g;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> id >> g;
            if(g >= 10 && g <= 100)
                als[id] = max(als[id], g);
            else excecao[id] = max(excecao[id], g);
            ids.push_back(id);
        }

        for(int i = 0; i < n; i++){
            if(als[ids[i]] == 0)
                als[ids[i]] = excecao[ids[i]];
        }


        int res = 0;
        for(auto x : als){
            res += x.second;
        }

        cout << res << '\n';
    }
}