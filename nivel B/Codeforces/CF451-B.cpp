#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    int l = 0, r = 0;

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            l = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(a[i] != b[i]){
            r = i;
            break;
        }
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    int ans = 1;

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            ans = 0;
            break;
        }
    }

    if(ans) cout << "yes\n" << l + 1 << " " << r + 1;
    else cout << "no";
}