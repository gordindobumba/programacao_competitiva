#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c = 0;

    cin >> a >> b;

    while(b >= a){
        a *= 3;
        b *= 2;
        c++;
    }

    cout << c;
}