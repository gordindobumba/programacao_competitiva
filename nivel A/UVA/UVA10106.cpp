#include <bits/stdc++.h>
using namespace std;

const int x = 600;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    while(cin >> s1 && s1 != "EOF"){
        cin >> s2;
        int a[x] = {0};
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int n = s1.length();
        int m = s2.length();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                a[i + j] += (s1[i] - '0') * (s2[j] - '0');
            }
        }

        for(int i = 0; i < x - 1; i++){
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        int i = x - 1;
        while(i > 0 && a[i] == 0) i--;
        for(; i >= 0; i--) cout << a[i];
        cout << "\n";
    }
}