#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string v;
    while(n--){
        cin >> v;
        if((int)v.size() == 5) cout << 3 << '\n';
        else{
            bool ver = false;
            for(int i = 0; i < 3; i++){
                char c = v[i];
                if(i == 0){
                    v[i] = 'o';
                    if(v == "one") ver = true;
                }
                if(i == 1){
                    v[i] = 'n';
                    if(v == "one") ver = true;
                }
                if(i == 2){
                    v[i] = 'e';
                    if(v == "one") ver = true;
                }
                v[i] = c;
            }

            cout << (ver ? 1 : 2) << '\n';
        }
    }
}

/*

too



*/