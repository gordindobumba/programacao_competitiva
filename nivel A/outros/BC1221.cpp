#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    while(n--){
        bool p = true;
        int x; cin >> x;
        if(x < 2) p = false;
        else{
            int y = sqrt(x);
            for(int i = 2; i <= y; i++){
                if(x % i == 0) p = false;
            }
        }
        cout << (p ? "Prime\n" : "Not Prime\n");
    }
 
    return 0;
}