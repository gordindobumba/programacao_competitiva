#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, b, d;
    vector<int> laranjas;

    cin >> n >> b >> d;
    while(n--){
        int l;
        cin >> l;
        laranjas.push_back(l);
    }

    long long int soma = 0;
    int c = 0;

    for(int la : laranjas){
        if(la <= b) soma += la;
        if(soma > d){
            soma = 0;
            c += 1;
        }
    }

    cout << c;
}