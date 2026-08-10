#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

bool verify(pii a, pii b){
    return (a.first > b.first && a.second > b.second) || (a.first < b.first && a.second < b.second);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    while(cin >> n && n != 0){
        int pivot = (n + 1)/2;
        vector<pii> coords;
        pii m;

        for(int i = 1; i <= n; i++){
            int x, y; cin >> x >> y;
            coords.push_back({x, y});
            if(i == pivot) m = {x, y};
        }

        int stan = 0, ollie = 0;

        for(auto p : coords){
            if(p.first != m.first && p.second != m.second){
                if(verify(p, m)) stan++;
                else ollie++;
            }
        }

        cout << stan << " " << ollie << '\n';
    }
}