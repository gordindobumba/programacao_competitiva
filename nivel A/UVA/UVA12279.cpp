#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, a = 0, b = 0, t = 1;
    while(cin >> n && n){
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x > 0) a++;
            else b++;
        }

        cout << "Case " << t++ << ": " << a - b << '\n';
        a = 0, b = 0;
    }
}