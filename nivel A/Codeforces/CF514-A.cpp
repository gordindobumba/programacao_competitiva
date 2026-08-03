#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string number; cin >> number;
    int s = number.size();
    for(int i = 0; i < s; i++){
        char n = number[i];
        if(n >= '5'){
            number[i] = '9' - (n - '0');
        }
    }

    if(number[0] == '0') number[0] = '9';

    cout << number;
}