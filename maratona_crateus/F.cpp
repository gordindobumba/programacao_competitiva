#include <bits/stdc++.h>
using namespace std;

void testar(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    testar();

    int n; cin >> n;
    string s1, s2;

    int val1, val2;
    for(int i = 1; i <= n; i++){
        cin >> s1 >> s2;
        val1 = 0;
        val2 = 0;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int k = 1;
        for(int j = 0; j < (int)s1.size(); j++){
            val1 += (s1[j] - '0') * k;
            k *= 2;
        }

        k = 1;
        for(int j = 0; j < (int)s2.size(); j++){
            val2 += (s2[j] - '0') * k;
            k *= 2;
        }

        if(gcd(val1, val2) > 1)
            cout << "Pair #" << i << ": All you need is love!\n";
        else cout << "Pair #" << i << ": Love is not all you need!\n";
    }
}