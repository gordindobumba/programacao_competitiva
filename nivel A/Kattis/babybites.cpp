#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int ant = 0;
    string bite;
    bool valid = 1;

    while(n--){
        cin >> bite;
        if(bite != "mumble"){
            int num = stoi(bite);
            if(num != ant + 1) valid = 0;
        }
        ant++;
    }

    cout << (valid ? "makes sense" : "something is fishy");
}