#include <bits/stdc++.h>
using namespace std;

bool valid(char x, char y){
    return x == 'O' && y == 'O';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string str;
    vector<string> rows;

    for(int i = 0; i < n; i++){
        cin >> str;
        rows.push_back(str);
    }
    
    int t = 0;

    for(int i = 0; i < n; i++){
        if(valid(rows[i][0], rows[i][1])){
            rows[i][0] = '+';
            rows[i][1] = '+';
            t = 1;
            break;
        }
        else if(valid(rows[i][3], rows[i][4])){
            rows[i][3] = '+';
            rows[i][4] = '+';
            t = 1;
            break;
        }
    }

    if(!t) cout << "NO";
    else{
        cout << "YES\n";
        for(auto l : rows){
            cout << l << '\n';
        }
    }
}