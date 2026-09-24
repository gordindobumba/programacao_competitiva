#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    int res = 0;
    stack<int> s;

    for(char c : str){
        if(s.empty() || s.top() != c) s.push(c);
        else{
            s.pop();
            res ^= 1;
        }
    }

    cout << (res ? "Yes" : "No");
}