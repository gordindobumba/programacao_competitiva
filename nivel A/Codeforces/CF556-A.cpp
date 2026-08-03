#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    char num;
    int ones = 0, zeros = 0;
    while(n--){
        cin >> num;
        if(num == '1') ones++;
        else zeros++;
    }

    cout << abs(ones - zeros);
}