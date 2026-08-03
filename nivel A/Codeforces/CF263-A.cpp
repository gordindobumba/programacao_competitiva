#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int number, x = 0, y = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> number;
            if(number == 1){
                x = i;
                y = j;
            }
        }
    }

    int moves = abs(2 - x) + abs(2 - y);
    cout << moves;
}