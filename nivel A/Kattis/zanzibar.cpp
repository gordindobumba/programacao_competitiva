#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    test();

    int n, x; cin >> n;
    int ant, res;
    bool pri = 1;
    for(int i = 0; i < n; i++){
        res = 0;
        x = -1;
        while(cin >> x && x){
            if(!pri){
                if(x > ant * 2)
                    res += x - (ant * 2);
            }
            pri = 0;
            ant = x;
        }

        cout << res << '\n';
    }
}