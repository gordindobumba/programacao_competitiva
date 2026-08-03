#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        vector<long long> fib(x + 1, 0);
        vector<long long> cham(x + 1, 0);
        fib[0] = 0;
        fib[1] = 1;
        
        cham[0] = 1;
        cham[1] = 1;

        for(int i = 2; i <= x; i++){
            fib[i] = fib[i - 1] + fib[i - 2];
            cham[i] = 1 + cham[i - 1] + cham[i - 2];
        }

        cout << "fib(" << x << ") = " << cham[x] - 1 << " calls = " << fib[x] << '\n';
    }
}