#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q = 0; cin >> n;
    string row; cin >> row;
    vector<int> groups;

    int r = 0;

    for(int i = 0; i < n; i++){
        if(row[i] == 'B'){
            q++;
            while(row[i] == 'B'){
                r++;
                i++;
            }
            groups.push_back(r);
        }
        r = 0;
    }

    cout << q << '\n';
    for(auto x : groups){
        if(r) cout << " ";
        else r = 1;
        cout << x;
    }
}