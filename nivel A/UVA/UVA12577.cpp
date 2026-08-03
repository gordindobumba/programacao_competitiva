#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int i = 1;
    while(cin >> str && str != "*"){
        if(str == "Hajj") cout << "Case " << i << ": Hajj-e-Akbar\n";
        else cout << "Case " << i << ": Hajj-e-Anghar\n";
        ++i;
    }
}