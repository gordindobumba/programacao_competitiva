#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t = 0;
    vector<int> coins;
    cin >> n;
    while(n--){
        int c;
        cin >> c;
        t += c;
        coins.push_back(c);
    }

    int t2 = 0, m = 0;
    sort(coins.begin(), coins.end());
    while(t2 <= t){
        ++m;
        t2 += coins.back();
        t -= coins.back();
        coins.pop_back();
    }

    cout << m;
}