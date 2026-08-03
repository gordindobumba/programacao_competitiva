#include <bits/stdc++.h>
using namespace std;

char grid[4][4];

bool test(int i, int j){
   return grid[i][j] == grid[i][j + 1] && grid[i][j] == grid[i + 1][j] && grid[i][j] == grid[i + 1][j + 1];
}

bool test(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(test(i, j)) return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> grid[i][j];
        }
    }

    bool t = test();

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            char og = grid[i][j];

            if(grid[i][j] == '#') grid[i][j] = '.';
            else grid[i][j] = '#';

            if(test()) t = true;

            grid[i][j] = og;
        }
    }

    cout << (t == true ? "YES" : "NO");
}