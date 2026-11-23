#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    
    vector<int> qtd(n + 1);
    long long res = 1;
    for(int i = 0; i < n; i++){
        if(i > 0 && v[i] != v[i - 1])
            res += i - qtd[v[i]];
        qtd[v[i]]++;
    }

    cout << res;
}