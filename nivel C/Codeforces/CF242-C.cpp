#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

set<pair<int, int>> segs;
int d_i[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int d_j[8] = {0, 1, 1, 1, 0, -1, -1, -1};



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x1, x2; cin >> x1 >> x2;
    int y1, y2; cin >> y1 >> y2;

    int n; cin >> n;
    while(n--){
        int r, a, b;
        cin >> r >> a >> b;
        for(int i = a; i <= b; i++){
            segs.insert({r, i});
        }
    }

    int dist = -1;
    queue<pair<pii, int>> q;
    map<pii, int> verify;
    q.push({{x1, x2}, 0});

    while((int)q.size()){
        pii coords = q.front().first;
        int d = q.front().second;
        if(coords.first == y1 && coords.second == y2){
            dist = q.front().second;
            break;
        }
        q.pop();

        for(int i = 0; i < 8; i++){
            int x = coords.first + d_i[i];
            int y = coords.second + d_j[i];
            if(segs.count({x, y}) && verify[{x, y}] == 0){
                q.push({{x, y}, d + 1});
                verify[{x, y}]++;
            }
            else continue;
        }
    }

    cout << dist;
}