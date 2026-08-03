#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, sum = 0, a;

    cin >> n >> h;

    while(n--){
        cin >> a;
        if(a <= h) sum++;
        else sum += 2;
    }

    cout << sum;
}