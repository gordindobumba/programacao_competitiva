#include <bits/stdc++.h>
using namespace std;

int n, s, t;
vector<int> v;

void ajuste(int& i){
    if(i == -1) i = n - 1;
    if(i == n) i = 0;
}

int caso1(){
    int i = s - 1, sum = 0;
    while(i != t - 1){
        sum += v[i];
        ++i;
        ajuste(i);
    }
    return sum;
}

int caso2(){
    int i = s - 2;
    int sum = 0;
    while(i != t - 2){
        ajuste(i);
        sum += v[i];
        --i;
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cin >> s >> t;
    cout << min(caso1(), caso2());
}