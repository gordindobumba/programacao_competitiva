#include <bits/stdc++.h>
using namespace std;

void testar(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    testar();
    int n, x, mary, john;
    while(cin >> n && n){
        mary = 0, john = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x) john++;
            else mary++;
        }

        cout << "Mary won " << mary << " times and John won " << john << " times\n";
    }
}