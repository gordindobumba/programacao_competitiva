#include <bits/stdc++.h>
using namespace std;

map<string, int> joias;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string joia;
    while(cin >> joia && joia != "EOF")
        if(joias[joia] == 0) joias[joia] = 1;
    
    cout << joias.size() << '\n';
    return 0;
}