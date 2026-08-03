#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<pair<int, int>> teams;
    int c1, c2;

    cin >> n;
    while(n--){
        cin >> c1 >> c2;
        teams.push_back(make_pair(c1, c2));
    }

    int count = 0;
    int s = teams.size();

    for(int i = 0; i < s; i++){
        pair colors = teams[i];
        for(int j = 0; j < s; j++){
            if(j != i){
                pair colors2 = teams[j];
                if(colors.first == colors2.second) count += 1;
            }
        }
    }

    cout << count;
}