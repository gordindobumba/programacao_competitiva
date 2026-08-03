#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, g = 1;
    string magnet;
    vector<pair<char, char>> magnets;

    cin >> n;
    while(n--){
        cin >> magnet;
        magnets.push_back(make_pair(magnet[0], magnet[1]));
    }

    pair m1 = magnets[0];
    int s = magnets.size();

    for(int i = 1; i < s; i++){
        pair m = magnets[i];
        if(m1.second == m.first) g += 1;
        m1 = m;
    }

    cout << g;
}