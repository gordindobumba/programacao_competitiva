#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k, t; cin >> n >> m >> k >> t;
    vector<int> positions(k);

    for(int i = 0; i < k; i++){
        int a, b; cin >> a >> b;
        positions[i] = (a - 1) * m + b - 1;
    }

    sort(positions.begin(), positions.end());

    for(int i = 0; i < t; i++){
        int q1, q2; cin >> q1 >> q2;
        q1--; q2--;
        int q = q1 * m + q2;
        int l = 0, r = k - 1;
        while(l <= r){
            int m = l + (r - l)/2;
            if(positions[m] < q) l = m + 1;
            else r = m - 1;
        }

        if(positions[l] == q) cout << "Waste\n";
        else{
            int c = (q - l) % 3;
            switch(c){
                case 0: cout << "Carrots\n"; break;
                case 1: cout << "Kiwis\n"; break;
                case 2: cout << "Grapes\n"; break;
            }
        }
    }
}