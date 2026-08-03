#include <bits/stdc++.h>
using namespace std;

void occupy(vector<int>& v, int x){
    if(v[x] != 0) return;
    else{
        v[x] = x;
        int i = x + 1, s = v.size();
        while(v[i] == 0 && i < s){
            v[i] = x;
            i++;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<int> trigger(n + 1, 0);

    for(int i = 0; i < m; i++){
        int x; cin >> x;
        occupy(trigger, x);
    }

    for(int i = 1; i <= n; i++){
        cout << trigger[i] << " ";
    }
}