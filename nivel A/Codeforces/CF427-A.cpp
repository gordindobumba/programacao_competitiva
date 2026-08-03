#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int e, p = 0, c = 0;

    cin >> n;
    while(n--){
        cin >> e;
        if(e > 0) p += e;
        else{
            if(p > 0) p--;
            else c++;
        }
    }

    cout << c;
}