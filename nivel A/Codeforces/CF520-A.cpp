#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string str;
    cin >> n >> str;

    string letters = "abcdefghijklmnopqrstuvwxyz";

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    int index = 0;
    for(int i = 0; i < n; i++){
        if(letters[index] == str[i]) ++index;
        if(index == 26) break;
    }

    if(index == 26) cout << "YES";
    else cout << "NO";
}