#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int lower = 0, upper = 0;
    cin >> str;

    for(char c: str){
        if(isupper(c)) upper++;
        else lower++;
    }

    if(lower >= upper) transform(str.begin(), str.end(), str.begin(), ::tolower);
    else transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << str;
}