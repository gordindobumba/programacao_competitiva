#include <bits/stdc++.h>
using namespace std;

void testar(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b; cin >> a >> b;
    double valores[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    cout << "Total: R$ " << fixed << setprecision(2) << valores[a - 1] * b << '\n';
}