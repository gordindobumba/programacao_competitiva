#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define MP make_pair
#define PB push_back

int main(){
    int n, m, a, b;
    cin >> n >> m;
    vector<pii> matches;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        matches.PB(MP(b, a));
    }

    sort(matches.rbegin(), matches.rend());
    int sum = 0, i = 0;
    while(1){
        if(i == m) break;
        if(n - matches[i].second >= 0){
            n -= matches[i].second;
            sum += matches[i].first * matches[i].second;
        }
        else{
            int d = -1 * (n - matches[i].second);
            matches[i].second -= d;
            sum += matches[i].first * matches[i].second;
            break;
        }
        i++;
    }

    cout << sum;
}