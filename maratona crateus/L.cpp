#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string linha1 = "", linha2 = "";
    int b;
    for(int i = 0; i < n; i++){
        cin >> b;
        if(b == 1) linha1 += '1';
        else linha1 += '0';
    }

    int s = (int)linha1.size();

    while(s > 1){
        for(int i = 0; i < s - 1; i++){
            if(linha1[i] != linha1[i + 1]) linha2 += '1';
            else linha2 += '0';
        }

        linha1 = linha2;
        linha2 = "";
        s--;
    }

    cout << (linha1[0] == '1' ? "branca\n" : "preta\n");
}