#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int s; cin >> s;
    string b; cin >> b;

    int z = 0, e  = 0, r = 0, o = 0, n = 0;
    for(int i = 0; i < s; i++){
        switch(b[i]){
            case 'z':
                z++; break;
            case 'e':
                e++; break;
            case 'r':
                r++; break;
            case 'o':
                o++; break;
            case 'n':
                n++; break;
        }
    }

    int ones = min({o, n, e});
    o -= ones;
    n -= ones;
    e -= ones;
    int zeros = min({z, e, r, o});

    for(int i = 0; i < ones; i++){
        cout << 1 << " ";
    }

    for(int i = 0; i < zeros; i++){
        cout << 0 << " ";
    }
}