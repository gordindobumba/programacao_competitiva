#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int d1, d2, d3; cin >> d1 >> d2 >> d3;
    
    int t1 = d1 + d2 + d3;
    int t2 = 2*d1 + 2*d2;
    int t3 = 2*d2 + 2*d3;
    int t4 = 2*d1 + 2*d3;
    cout << min(min(t1, t2), min(t3, t4));
}