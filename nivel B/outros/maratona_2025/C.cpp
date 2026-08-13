#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n + 1; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    int s = v.size(), c = 0;

    while(s > 1){
        c++;
        if(v[s - 1] == 0) v.pop_back();
        else{
            vector<int> v2 = v;
            v.push_back(0);
            v[s] += 1;
            for(int i = 0; i < s; i++){
                v[i + 1] += v2[i];
            }
            for(int i = s; i >= 0; i--){
                if(v[i] > 1){
                    if(i > 0) v[i] = 0;
                    else v.erase(v.begin());
                }
            }
        }
        s = v.size();
    }

    cout << c;
}