#include <bits/stdc++.h>
using namespace std;

int calc_pylons(int m, vector<int> pylons){
    int s = pylons.size();
    pylons[0] = m;
    int sum = 0;
    for(int i = 0; i < s - 1; i++){
        sum += pylons[i] - pylons[i + 1];
        if(sum < 0) return 0;
    }

    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> pylons(n + 1);
    pylons[0] = 0;

    for(int i = 1; i <= n; i++){
        cin >> pylons[i];
    }

    int l = 0, r = 100005;
    while(l <= r){
        int m = l + (r - l)/2;
        if(!calc_pylons(m, pylons)) l = m + 1;
        else r = m - 1;
    }

    cout << l;
}