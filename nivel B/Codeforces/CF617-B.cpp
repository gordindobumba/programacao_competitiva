#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> chocolate(n);
    long long res = 0;
    for(int i = 0; i < n; i++){
        cin >> chocolate[i];
        if(chocolate[i] == 1) res = 1;
    }

    int atual = 0;

    for(int i = 0; i < n; i++){
        if(chocolate[i] == 1 && atual == 0)
            atual++;
        else if(chocolate[i] == 0 && atual > 0)
            atual++;
        else if(chocolate[i] == 1 && atual > 0){
            res *= atual;
            atual = 1;
        }
    }

    cout << res;

}