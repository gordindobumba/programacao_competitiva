#include <bits/stdc++.h>
using namespace std;

#define vpii vector<pair<int, int>>
#define N 26
vpii letters[N];
vpii shift;
int x;

int euclidean(int x1, int y1, int x2, int y2){
    return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}

bool check(int i, int j){
    for(int a = 0; a < (int)shift.size(); a++){
        int k = euclidean(i, j, shift[a].first, shift[a].second);
        if(k <= x*x) return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m >> x;
    vector<string> keyboard(n);
    for(int i = 0; i < n; i++){
        cin >> keyboard[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c = keyboard[i][j];
            if(c != 'S') letters[c - 'a'].push_back({i, j});
            else shift.push_back({i, j});
        }
    }

    bool reach[N] = {false};
    for(int i = 0; i < N; i++){
        for(int j = 0; j < (int)letters[i].size() && !reach[i]; j++){
            reach[i] = check(letters[i][j].first, letters[i][j].second);
        }
    }

    int t; cin >> t;
    string q; cin >> q;
    int res = 0;
    for(char c : q){
        if(islower(c)){
            int p = c - 'a';
            if(letters[p].empty()){
                res = -1;
                break;
            }
        }
        else{
            char d = tolower(c);
            if(shift.empty() || letters[d - 'a'].empty()){
                res = -1;
                break;
            }
            else if(!reach[d - 'a']) res++;
        }
    }

    cout << res;
}