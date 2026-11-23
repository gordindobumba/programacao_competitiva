#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n, m, x, y;
    while(cin >> k && k){
        cin >> n >> m;
        for(int i = 0; i < k; i++){
            cin >> x >> y;
            if(x == n || y == m) cout << "divisa\n";
            else{
                if(x > n && y > m) cout << "NE\n";
                else if(x < n && y > m) cout << "NO\n";
                else if(x < n && y < m) cout << "SO\n";
                else cout << "SE\n";
            }
        }
    }
}