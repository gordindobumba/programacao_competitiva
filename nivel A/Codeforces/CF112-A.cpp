#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1;
    string str2;
    int n = 0;

    cin >> str1 >> str2;
    int s = str1.size();

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    for(int i = 0; i < s; i++){
        if(str1[i] < str2[i]){
            n = -1;
            break;
        }
        else if(str1[i] > str2[i]){
            n = 1;
            break;
        }
    }

    if(n == 0) cout << '0';
    else if(n == -1) cout << "-1";
    else cout << '1';
}