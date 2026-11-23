#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    while(!a.empty() && a.back() == b.back()){
        a.pop_back();
        b.pop_back();
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    while(!a.empty() && a.back() == b.back()){
        a.pop_back();
        b.pop_back();
    }

    if(a.empty()){
        cout << "Yes";
        return 0;
    }

    vector<int> l = a;
    rotate(l.begin(), l.begin() + 1, l.end());
    if(l == b){
        cout << "Yes";
        return 0;
    }

    vector<int> r = a;
    rotate(r.begin(), prev(r.end(), 1), r.end());
    if(r == b){
        cout << "Yes";
        return 0;
    }

    cout << "No";
}