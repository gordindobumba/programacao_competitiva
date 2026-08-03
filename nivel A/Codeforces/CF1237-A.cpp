#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> sc;

    int a = 0;
    for(int i = 0; i < n; i++){
        int p; cin >> p;
        if(p % 2 == 0) p /= 2;
        else{
            if(a){
                p = (int)(floor( (float) p/2));
                a = 0;
            }else{
                p = (int)(ceil( (float) p/2));
                a = 1;
            }
        }
        sc.push_back(p);
    }

    for(auto x : sc){
        cout << x << '\n';
    }
}