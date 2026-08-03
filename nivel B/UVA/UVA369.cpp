#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int triangle[105][105] = {0};
    triangle[0][0] = 1;
    triangle[1][0] = 1;
    triangle[1][1] = 1;

    for(int i = 2; i < 101; i++){
        triangle[i][0] = 1;
        for(int j = 1; j <= i; j++){
            triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
        }
    }

    int n, m;
    while(cin >> n >> m, (n + m)){
        cout << n << " things taken " << m << " at a time is " << triangle[n][m] << " exactly.\n";
    }
}