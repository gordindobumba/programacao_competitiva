#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string str;
    cin >> n >> str;
    string str2(n, '-');

    int j = 0, k = n - 1, f = (n % 2 == 1 ? 0 : 1);
        
    for(int i = n - 1; i >= 0; i--){
        if(i % 2 == f){
            str2[k] = str[i];
            k--;
        }else{
            str2[j] = str[i];
            j++;
        }
    }

    cout << str2;
}