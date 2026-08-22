#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed << setprecision(2);

    int n; cin >> n;
    cout << "INTERSECTING LINES OUTPUT\n";
    while(n--){
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        int a1 = y1 - y2, a2 = y3 - y4;
        int b1 = x2 - x1, b2 = x4 - x3;

        int c1 = a1 * x1 + b1 * y1;
        int c2 = a2 * x3 + b2 * y3;

        int D = a1*b2 - a2*b1;

        int D1 = c1*b2 - c2*b1;
        int D2 = a1*c2 - a2*c1;

        if(D) cout << "POINT " << (double)D1 / D << " " << (double)D2 / D << '\n';
        else{
            if(D1 == 0 && D2 == 0) cout << "LINE\n";
            else cout << "NONE\n";
        }
    }
    cout << "END OF OUTPUT\n";
}