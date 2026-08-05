#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    long long int n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << floor((-1 + sqrt(1 + 8*n))/2) << '\n';
    }
}