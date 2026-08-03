#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, l; cin >> n >> l;

    vector<int> lants(n);

    for(int i = 0; i < n; i++){
        cin >> lants[i];
    }

    sort(lants.begin(), lants.end());

    double best = 0, dif;
    for(int i = 0; i <= n; i++){
        if(i == 0) dif = (double) lants[i];
        else if(i == n) dif = (double) l - lants[i - 1];
        else dif = (double)(lants[i] - lants[i - 1])/2;
        
        best = max(best, dif);
    }

    cout << fixed << setprecision(9) << best;
}