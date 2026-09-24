#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << fixed << setprecision(4);

    long long n;
    vector<double> v;
    while(cin >> n){
        v.push_back(sqrt(n));
    }

    reverse(v.begin(), v.end());
    for(auto x : v){
        cout << x << '\n';
    }
}