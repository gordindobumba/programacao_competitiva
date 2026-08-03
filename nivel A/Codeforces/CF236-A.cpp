#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<char> letters;
    string str;
    cin >> str;

    for(char c: str){
        letters.insert(c);
    }

    int n = letters.size();

    if(n % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}