#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y, w, b;
    cin >> y >> w;
    
    if(y >= w) b = y;
    else b = w;

    switch(b){
        case 1:
            cout << "1/1";
            break;
        case 2:
            cout << "5/6";
            break;
        case 3:
            cout << "2/3";
            break;
        case 4:
            cout << "1/2";
            break;
        case 5:
            cout << "1/3";
            break;
        case 6:
            cout << "1/6";
            break;
    }
}