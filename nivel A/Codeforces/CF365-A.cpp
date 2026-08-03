#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    string number;
    string digits = "0123456789";
    int v = -1;
    int d_found = 0;
    cin >> n >> k;
    int g = 0;
    while(n--){
        cin >> number;
        for(int i = 0; i <= k; i++){
            v = number.find(digits[i]);
            if(v != -1){
                d_found++;
                v = -1;
            }
        }
        if(d_found >= k + 1) g++;
        d_found = 0;
    }
    cout << g;
}