#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    unsigned int n;
    while(cin >> n && n != 0){
        unsigned int sqr = (int) sqrt(n);
        cout << (sqr * sqr == n ? "yes\n" : "no\n");
    }
}