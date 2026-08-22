#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string str;
    while(n--){
        cin >> str;
        bool valido = true;

        for(int i = 0; i < (int)str.size() - 1; i++){
            if(tolower(str[i]) >= tolower(str[i + 1])){
                valido = false;
                break;
            }
        }

        cout << str << ": " << (valido ? "O\n" : "N\n");
    }
}