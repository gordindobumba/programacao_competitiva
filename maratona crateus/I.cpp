#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if((a + b > c) && (a + c > b) && (b + c > a)) cout << "S\n";
    else if((a + c > d) && (a + d > c) && (d + c > a)) cout << "S\n";
    else if((a + b > d) && (a + d > b) && (b + d > a)) cout << "S\n";
    else if((d + b > c) && (d + c > b) && (b + c > d)) cout << "S\n";
    else cout << "N\n";
}