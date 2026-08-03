#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, a;
    cin >> t;
    while(t--){
        int maior = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            maior = max(maior, a);
        }
        cout << n * maior << '\n';
    }
}