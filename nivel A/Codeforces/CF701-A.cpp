#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int, int>> cards;
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        cards.push_back({x, i});
    }

    sort(cards.begin(), cards.end());
    for(int i = 0, j = n - 1; i < n/2 && j >= n/2; i++, j--){
        cout << cards[i].second << " " << cards[j].second << '\n';
    }
}