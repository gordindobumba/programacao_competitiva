#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str;
    int sum = 0;

    int n = (int)str.length();
    int r = 0;
    while(n > 1){
        for(char c : str)
            sum += c - '0';
        str = to_string(sum);
        n = (int)str.length();
        
        sum = 0;
        r++;
    }

    cout << r;
}