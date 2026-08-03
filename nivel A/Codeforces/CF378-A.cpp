#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b; cin >> a >> b;
    int x = 0, y = 0, z = 0;

    for(int i = 1; i <= 6; i++){
        if(abs(i - a) < abs(i - b)) x++;
        else if(abs(i - a) == abs(i - b)) y++;
        else z++;
    }

    cout << x << " " << y << " " << z;
}