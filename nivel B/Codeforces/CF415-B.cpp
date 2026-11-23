#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, a, b, x; cin >> n >> a >> b;
    for(int i = 0; i < n; i++){
        cin >> x;
        cout << ((x * a) % b) / a << " ";
    }
}