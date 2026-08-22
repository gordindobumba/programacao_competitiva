#include <bits/stdc++.h>
using namespace std;

bool validar(string s1, string s2){
    bool res;
    int n = (int)s2.size();
    for(int i = 0; i < n; i++){
        if(s2[i] == s1[0]){
            res = true;
            for(int j = 0; j < (int)s1.size(); j++){
                if(s1[j] != s2[(i + j) % n]){
                    res = false;
                    break;
                }
            }
        }
        if(res) return true;
    }

    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;

        string s3 = s1;
        reverse(s3.begin(), s3.end());

        bool res = validar(s1, s2) || validar(s3, s2);

        cout << (res ? "S\n" : "N\n");
    }
}
