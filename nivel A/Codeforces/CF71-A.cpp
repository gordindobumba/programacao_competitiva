#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    vector<string> strs;

    cin >> n;
    while(n--){
        string str;
        cin >> str;
        strs.push_back(str);
    }

    int s = strs.size();
    for(int i = 0; i < s; i++){
        int size = strs[i].size();
        if(size > 10){
            string word = strs[i];
            char l1 = word[0];
            char l2 = word[size - 1];
            string new_str = l1 + to_string(size - 2) + l2;
            strs[i] = new_str;
        }
    }

    for(string str: strs){
        cout << str << '\n';
    }
}