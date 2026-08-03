#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a; cin >> n;
    int q1 = 0, q2 = 0, q3 = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(i % 3 == 0) q1 += a;
        else if(i % 3 == 1) q2 += a;
        else q3 += a;
    }
    int maior = max(max(q1, q2), max(q2, q3));
    if(maior == q1) cout << "chest";
    else if(maior == q2) cout << "biceps";
    else cout << "back";
}