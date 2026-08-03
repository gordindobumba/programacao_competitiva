#include <bits/stdc++.h>
using namespace std;

#define N 50005
#define sz(v) (int)v.size()

int biggest_smaller(vector<int>& c, int h){
    int s = sz(c);
    int l = 0, r = s - 1;
    while(l <= r){
        int m = l + (r - l)/2;
        if(c[m] >= h) r = m - 1;
        else l = m + 1;
    }

    return r;
}

int smallest_bigger(vector<int>& c, int h){
    int s = sz(c);
    int l = 0, r = s - 1;
    while(l <= r){
        int m = l + (r - l)/2;
        if(c[m] <= h) r = m - 1;
        else l = m + 1;
    }

    return r;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> chimps(n);
    for(int i = 0; i < n; i++){
        cin >> chimps[i];
    }

    vector<int> decreasing = chimps;
    reverse(decreasing.begin(), decreasing.end());

    int q; cin >> q;
    while(q--){
        int h; cin >> h;

        int a = biggest_smaller(chimps, h);
        int b = smallest_bigger(decreasing, h);

        if(a == -1) cout << "X ";
        else cout << chimps[a] << " ";

        if(b == -1) cout << "X";
        else cout << decreasing[b];

        cout << "\n";
    }
}