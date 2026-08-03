#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, r;
    cin >> k >> r;
    int count = 1;
    int temp = k;

    while((k % 10 != 0) && (((k - r) % 10) != 0)){
        k += temp;
        count++;
    }

    cout << count;
}