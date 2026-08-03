#include <bits/stdc++.h>
using namespace std;
#define mat vector<vector<int>>

int d_i[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int d_j[8] = {1, -1, 2, -2, 2, -2, 1, -1};

bool valid(int a, int b){
    return a >= 0 && b >= 0 && a < 8 && b < 8;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string xx, yy;
    while(cin >> xx && xx != "EOF"){
        cin >> yy;
        mat board(8, vector<int>(8, 0));
        int a1 = xx[0] - 'a', a2 = xx[1] - '0' - 1;
        int b1 = yy[0] - 'a', b2 = yy[1] - '0' - 1;
        board[a1][a2] = 1;
        board[b1][b2] = 2;

        queue<pair<pair<mat, int>, pair<int, int>>> q;
        q.push({{board, 0}, {a1, a2}});

        while((int)q.size()){
            mat game = q.front().first.first;
            int movements = q.front().first.second;
            int x = q.front().second.first, y = q.front().second.second;
            q.pop();

            if(game[x][y] == 2){
                cout << "To get from " << xx[0] << xx[1] << " to " << yy[0] << yy[1] << " takes " << movements << " knight moves.\n";
                break;
            }

            for(int i = 0; i < 8; i++){
                int a = x + d_i[i];
                int b = y + d_j[i];
                if(valid(a, b)){
                    game[x][y] = 1;
                    q.push({{game, movements + 1}, {a, b}});
                    game[x][y] = 0;
                }
            }
        }
    }
}