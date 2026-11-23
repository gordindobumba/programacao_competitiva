#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, n;
    cin >> x >> y >> n;

    for(int i = 1; i <= n; i++){
        if(i % lcm(x, y) == 0) cout << "FizzBuzz\n";
        else if(i % x == 0) cout << "Fizz\n";
        else if(i % y == 0) cout << "Buzz\n";
        else cout << i << '\n';
    }
}