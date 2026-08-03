#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c){
    return a + b > c && a + c > b && b + c > a;
}

int main(){
    int n; cin >> n;
    vector<int> lines(n);
    
    for(int i = 0; i < n; i++){
        cin >> lines[i];
    }

    sort(lines.begin(), lines.end());

    bool res = false;
    for(int i = n - 1; i >= 2; i--){
        if(check(lines[i], lines[i - 1], lines[i - 2])){
            res = true;
            break;
        }
    }

    cout << (res ? "YES" : "NO");
}