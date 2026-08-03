#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    unordered_set<char> letras;

    getline(cin, str);
    for(char c: str){
        if(isalpha(c)){
            letras.insert(c);
        }
    }

    int n = letras.size();
    cout << n;
}