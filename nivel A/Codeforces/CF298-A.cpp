#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string path; cin >> path;

    int i1 = 0, i2 = 0;
    for(int i = 0; i < n; i++){
        if(path[i] != '.'){
            i1 = i;
            break;
        }
    }
    for(int i = n - 1; i > 0; i--){
        if(path[i] != '.'){
            i2 = i;
            break;
        }
    }

    if(path[i1] == 'R' && path[i2] == 'R')
        cout << i1 + 1 << " " << i2 + 1 + 1;
    else if(path[i1] == 'L' && path[i2] == 'L')
        cout << i2 + 1 << " " << i1 - 1 + 1;
    else{
        for(int i = i1; i < n; i++){
            if(path[i] == 'L'){
                i2 = i;
                break;
            }
        }
        
        cout << i1 + 1 << " " << i2;
    }
}