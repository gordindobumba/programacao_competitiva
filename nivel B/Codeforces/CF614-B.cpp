#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

bool isbeautiful(string& s, int si){
    bool has_1 = false;
    for(int i = 0; i < si; i++){
        if(s[i] != '1' && s[i] != '0') return false;
        if(s[i] == '1'){
            if(has_1) return false;
            has_1 = true;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int zeros = 0, s;
    bool check = true, not_b = false;
    string num, not_beautiful;

    for(int i = 0; i < n; i++){
        cin >> num;
        if(num == "0" && check){
            cout << 0;
            check = false;
        }
        else{
            s = num.size();
            if(!not_b){
                if(isbeautiful(num, s)) zeros += s - 1;
                else{
                    not_beautiful = num;
                    not_b = true;
                }
            }
            else zeros += s - 1;
        }
    }

    if(check){
        if(not_b){
            s = not_beautiful.size();
            int i = s - 1;
            while(not_beautiful[i] == 0) i--;
            zeros += s - 1 - i;
            not_beautiful = not_beautiful.substr(0, i + 1);
            cout << not_beautiful;
            for(i = 0; i < zeros; i++){
                cout << 0;
            }
        }
        else{
            cout << 1;
            for(int i = 0; i < zeros; i++){
                cout << 0;
            }
        }
    }
}