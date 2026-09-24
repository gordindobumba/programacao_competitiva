#include <bits/stdc++.h>
using namespace std;

const int M = 101;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> ids[M];
    set<int, greater<int>> nums;

    int n; cin >> n;
    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        ids[b].push_back(a);
        nums.insert(b);
    }

    for(int x : nums){
        for(int y : ids[x]){
            cout << y << " " << x << '\n';
        }
    }
}