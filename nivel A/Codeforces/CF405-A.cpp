#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, b;
    vector<int> t;

    cin >> n;
    while(n--){
        cin >> b;
        t.push_back(b);
    }
    
    sort(t.begin(), t.end());

    for(int b : t){
        cout << b << " ";
    }
}