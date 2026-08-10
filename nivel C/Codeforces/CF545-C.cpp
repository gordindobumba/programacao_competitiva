#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> trees(n + 1), heights(n);

    for(int i = 0; i < n; i++){
        cin >> trees[i] >> heights[i];
    }

    int cuts = 1;
    trees[n] = INT_MAX;

    for(int i = 1; i < n; i++){
        if(trees[i] - heights[i] > trees[i - 1]){
            cuts++;
            continue;
        }
        if(trees[i] + heights[i] < trees[i + 1]){
            cuts++;
            trees[i] += heights[i];
        }
    }

    cout << cuts;
}