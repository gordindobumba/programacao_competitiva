#include <bits/stdc++.h>
using namespace std;

vector<int> digitos(1000001);

void precalcular(){
    long long m = 1;
    for(int i = 1; i <= 1000000; i++){
        m *= i;
        while((m % 10) == 0) m /= 10;
        
        m %= 1000000;
        digitos[i] = m % 10;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t = 1;
    precalcular();
    while(cin >> n){
        cout << "Instancia " << t++ << '\n' << digitos[n] << "\n\n";
    }
}
