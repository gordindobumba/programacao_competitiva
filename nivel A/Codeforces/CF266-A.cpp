#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s = 0;
    string str;

    cin >> n >> str;

    for(int i = 1; i < n; i++){
        if(str[i] == str[i - 1]) s += 1;
    }

    cout << s;
}