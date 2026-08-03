#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char ch){
    return (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'y');
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2 = ""; cin >> s1;
    for(char c : s1){
        char d = tolower(c);
        if(!is_vowel(d)){
            s2 += ".";
            s2 += d;
        }
    }

    cout << s2;
}