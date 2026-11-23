#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    test();

    string texto;
    bool segundo = 0;

    while(getline(cin, texto)){
        int s = texto.size();
        for(int i = 0; i < s; i++){
            if(texto[i] == '"'){
                if(segundo) cout << "''";
                else cout << "``";
                segundo = 1 - segundo;
            }
            else cout << texto[i];
        }
        cout << "\n";
    }
}