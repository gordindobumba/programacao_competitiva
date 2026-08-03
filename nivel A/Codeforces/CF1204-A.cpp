#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string b; cin >> b;
    int t = b.size();
    if(t % 2 == 1){
        int e = 0;
        for(int i = 1; i < t; i++){
            if(b[i] == '1'){
                e = 1;
                break;
            }
        }
        cout << t/2 + e;
    }else cout << t/2;
}