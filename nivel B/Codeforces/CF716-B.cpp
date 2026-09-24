#include <bits/stdc++.h>
using namespace std;

#define all(s) s.begin(), s.end()

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;

    string res = "";
    int n = s.size();
    int index = 0;
    for(int i = 0; i < n - 25; i++){
        set<char> letras;
        int q = 0;
        for(int j = i; j < i + 26; j++){
            if(s[j] - 'A' >= 0)
                letras.insert(s[j]);
            else q++;
        }
        if((int)letras.size() + q == 26){
            res = s.substr(i, 26);
            index = i;
            break;
        }
    }

    if((int)res.size() == 0) cout << -1;
    else{
        string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        n = 26;
        for(int i = 0; i < 26; i++){
            if(res[i] - 'A' >= 0){
                alf.erase(remove(all(alf), res[i]), alf.end());
                n--;
            }
        }

        int j = 0;
        for(int i = 0; i < 26; i++){
            if(res[i] == '?'){
                res[i] = alf[j];
                j++;
            }
        }

        n = s.size();
        for(int i = 0; i < index; i++){
            if(s[i] == '?') s[i] = 'A';
        }

        s.replace(index, 26, res);
        for(int i = index + 26; i < n; i++){
            if(s[i] == '?') s[i] = 'A';
        }
        cout << s;
    }
}