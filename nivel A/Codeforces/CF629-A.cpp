#include <bits/stdc++.h>
using namespace std;

long long triangular(int a){
    return (a*(a - 1))/2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<string> cake(n);
    vector<int> rows(n, 0), collumns(n, 0);

    for(int i = 0; i < n; i++) cin >> cake[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(cake[i][j] == 'C') rows[i]++;
            if(cake[j][i] == 'C') collumns[i]++;
        }
    }

    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += triangular(rows[i]) + triangular(collumns[i]);
    }
    cout << sum;
}