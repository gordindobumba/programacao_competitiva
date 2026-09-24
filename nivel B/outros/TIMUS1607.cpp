#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int i = 0;
    while(true){
        if(a + i*b >= c - i*d){
            cout << a + i*b;
            return 0;
        }

        if(a + (i + 1)*b >= c - i*d){
            cout << c - i*d;
            return 0;
        }

        i++;
    }
}