#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t, k, d;

    cin >> n >> t >> k >> d;

    int option1 = 0;
    int option2 = 0;

    int temp = n;

    while(temp > 0){
        temp -= k;
        option1 += t;
    }
    
    if(t <= d){
        int tempo = t;
        while(tempo <= d){
            n -= k;
            tempo += t;
        }
    }

    option2 += d;

    while(n > 0){
        n -= 2*k;
        option2 += t;
    }

    cout << (option2 < option1 ? "YES" : "NO");
}