#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

const double EPS = 1e-9;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int x0, y0; cin >> x0 >> y0;

    vector<bool> vivos(n, true);
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    int res = 0;
    for(int i = 0; i < n; i++){
        if(vivos[i]){
            res++;
            vivos[i] = false;
            for(int j = 0; j < n; j++){
                if((y[i] - y0)*(x[j] - x0) == (y[j] - y0)*(x[i] - x0)) vivos[j] = false;
            }
        }
    }

    cout << res;
}