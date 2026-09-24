#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, t;
    cin >> s >> t;

    vector<int> l1(26, 0), l2(26, 0);
    int n = s.size(), m = t.size();

    for(int i = 0; i < n; i++) l1[s[i] - 'a']++;
    for(int i = 0; i < m; i++) l2[t[i] - 'a']++;

    bool check = true;
    for(int i = 0; i < 26; i++){
        if(l1[i] < l2[i]){
            cout << "need tree";
            check = false;
            break;
        }
    }

    if(check){
        if(n == m) cout << "array";
        else{
            int j = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == t[j]) j++;
            }

            if(j == m) cout << "automaton";
            else cout << "both";
        }
    }
}