#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string st = "";
    int i = 1, s = st.size();
    while(s < 1000){
        st += to_string(i);
        i++;
        s = st.size();
    }

    cout << st[n - 1];
}