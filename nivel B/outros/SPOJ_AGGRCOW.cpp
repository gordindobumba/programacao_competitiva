#include <bits/stdc++.h>
using namespace std;

#define N 100005

bool verify(int dist, int n, int c, int v[]){
    int cows = 1;
    int previous = v[0];

    for(int i = 1; i < n; i++){
        if(v[i] - previous >= dist){
            ++cows;
            previous = v[i];
            if(cows == c) return true;
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, c; cin >> t;
    while(t--){
        cin >> n >> c;
        int stalls[N];
        
        for(int i = 0; i < n; i++) cin >> stalls[i];
        sort(stalls, stalls + n);

        int left = 0, right = stalls[n - 1] - stalls[0];
        int ans = 0;
        while(left <= right){
            int middle = (right + left)/2;
            if(verify(middle, n, c, stalls)){
                ans = middle;
                left = middle + 1;
            }else right = middle - 1;
        }

        cout << ans << '\n';
    }
}