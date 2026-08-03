#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int c = 0;
    while(n > 0){
        c++;
        n -= 5;
    }

    cout << c;
}