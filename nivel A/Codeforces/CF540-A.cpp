#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string n1, n2; cin >> n1 >> n2;

    int sum = 0, num;
    for(int i = 0; i < n; i++){
        num = abs((n1[i] - '0') - (n2[i] - '0'));
        sum += min(num, 10 - num);
    }
    cout << sum;
}