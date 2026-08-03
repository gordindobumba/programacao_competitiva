#include <bits/stdc++.h>
using namespace std;

int factorial(int x){
    vector<int> fac(x + 1, 0);
    fac[0] = 1;
    for(int i = 1; i <= x; i++){
        fac[i] = i * fac[i - 1];
    }
    return fac[x];
}

int combinations(int a, int b){
    return (factorial(a)/(factorial(b)*factorial(a - b)));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    int plus = 0, minus = 0, quest = 0;
    for(int i = 0; i < (int)s1.size(); i++){
        if(s1[i] == '+') ++plus;
        else ++minus;
    }

    for(int i = 0; i < (int)s2.size(); i++){
        if(s2[i] == '?') quest++;
        else{
            if(s2[i] == '+') --plus;
            else --minus;
        }
    }

    if(plus < 0 || minus < 0) cout << "0.000000000000";
    else cout << fixed << setprecision(12) << combinations(quest, plus)/pow(2, quest);
}