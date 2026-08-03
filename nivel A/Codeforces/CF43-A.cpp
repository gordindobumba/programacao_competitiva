#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int t[] = {1, 0};
    string t_backup = " ";
    string t1, t2;
    cin >> n;
    if(n == 1 || n == 2){
        while(n--) cin >> t1;
        cout << t1;
    }else{
        cin >> t1;
        n -= 1;
        while(n--){
            cin >> t2;
            if(t2 == t1) t[0]++;
            else {
                t_backup = t2;
                t[1]++;
            }
        }
        cout << (t[0] > t[1] ? t1 : t_backup);
    }
}