#include <bits/stdc++.h>
using namespace std;

bool valido = true;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    if(v[0] == 0) v[0] = 1;
    for(int i = 0; i < n - 1; i++){
        if(v[i + 1] == 0) v[i + 1] = v[i] + 1;
        else{
            if(v[i + 1] <= v[i]){
                valido = false;
                break;
            }
        }   
    }

    cout << (valido ? "sim\n" : "nao\n");
}