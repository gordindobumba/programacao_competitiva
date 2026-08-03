#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double pi = 3.14159265358979323846;

    double d, h, v, e;
    cin >> d >> h >> v >> e;

    double speed = v/((pi*d*d)/4);
    if(speed < e) cout << "NO";
    else cout << "YES\n" << fixed << setprecision(16) << h/(speed - e);
}