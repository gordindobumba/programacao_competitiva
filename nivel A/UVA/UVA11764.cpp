#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, h = 0, l = 0; cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j < n; j++) cin >> v[j];
        
        for(int j = 0; j < n; j++){
            if(j){
                if(v[j] > v[j - 1]) h++;
                else if(v[j] < v[j - 1]) l++;
            }
        }

        cout << "Case " << i << ": " << h << " " << l << '\n';
        h = 0, l = 0;
    }
}