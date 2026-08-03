#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int i = 0;
    while(1){
        if(a + i*b >= c - i*d){
            cout << a + i*b;
            break;
        }

        if(a + (i + 1)*b >= c - i*d){
            cout << c - i*d;
            break;
        }

        i++;
    }
}