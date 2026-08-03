#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b; cin >> a >> b;
    string snake(b, '#');
    string snake2(b, '.');

    int t = 0;

    for(int i = 0; i < a; i++){
        if(t) cout << '\n';
        else t = 1;

        if(i % 2 == 0) cout << snake;
        else{
            string str = snake2;
            if((i - 1) % 4 == 0) str[b - 1] = '#';
            else str[0] = '#';
            cout << str;
        }
    }
}