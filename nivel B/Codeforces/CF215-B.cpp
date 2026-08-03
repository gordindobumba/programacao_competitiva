#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    int x, y, z, max_x = 0, max_y = 0, min_z = 5001;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        max_x = max(max_x, x);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> y;
        max_y = max(max_y, y);
    }

    cin >> k;

    for(int i = 0; i < k; i++){
        cin >> z;
        min_z = min(min_z, z);
    }

    int A, B; cin >> A >> B;

    int num = B*max_y;
    int den = A*min_z + B*max_y;
    double frac = (double)num/(double)den;
    cout << fixed << setprecision(12) << (double)max_x * sqrt(frac);
}