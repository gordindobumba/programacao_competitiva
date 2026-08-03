#include <bits/stdc++.h>
using namespace std;

vector<int> V;
int n, a;

void scan(){
    int i = 0, res = 0;
    while(a - i >= 0 || a + i < n){
        if(a - i >= 0 && a + i < n){
            if(a - i == a + i && V[a - i] == 1) res++;
            else if(V[a - i] == 1 && V[a + i] == 1) res += 2;
        }else{
            if(a - i < 0 && V[i + a] == 1) res++;
            else if(i + a >= n && V[a - i] == 1) res++;
        }
        i++;
    }
    cout << res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> a;
    a--;
    V.resize(n);
    for(int i = 0; i < n; i++){
        cin >> V[i];
    }

    scan();
}