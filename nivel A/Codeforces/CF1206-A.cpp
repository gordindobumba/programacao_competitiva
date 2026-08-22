#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a; cin >> a;
    vector<int> n1(a);
    for(int i = 0; i < a; i++) cin >> n1[i];

    int b; cin >> b;
    vector<int> n2(b);
    for(int i = 0; i < b; i++) cin >> n2[i];

    sort(n1.rbegin(), n1.rend());
    sort(n2.rbegin(), n2.rend());
    cout << n1[0] << " " << n2[0];
}