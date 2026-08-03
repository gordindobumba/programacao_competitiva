#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    stack<int> s;
    int q = 0, l, h;

    for(int i = 0; i < n; i++){
        cin >> l >> h;
        if(s.empty()){
            q++;
            s.push(h);
        }
        else{
            while(s.top() > h){
                s.pop();
                if(s.empty()) break;
            }

            if(s.empty() || s.top() != h){
                q++;
                s.push(h);
            }else continue;
        }
    }

    cout << q;
}