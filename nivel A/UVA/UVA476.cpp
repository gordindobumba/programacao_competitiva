#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pd pair<double, double>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    char r;
    double x1, y1, x2, y2;
    vector<pair<pd, pd>> figuras;
    cin >> r;
    while(r == 'r'){
        cin >> x1 >> y1 >> x2 >> y2;
        figuras.push_back(mp(mp(x1, y1), mp(x2, y2)));
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> r;
    }

    double a, b;
    int i = 1, p = 1;
    int e = 0;
    while(cin >> a >> b && a != 9999.9 && b != 9999.9){
        for(auto f : figuras){
            double xmin = min(f.first.first, f.second.first);
            double xmax = max(f.first.first, f.second.first);
            double ymin = min(f.first.second, f.second.second);
            double ymax = max(f.first.second, f.second.second);

            if((a > xmin && a < xmax) && (b > ymin && b < ymax)){
                cout << "Point " << p << " is contained in figure " << i << '\n';
                e = 1;
            }
            ++i;
        }
        if(e == 0) cout << "Point " << p << " is not contained in any figure\n";
        e = 0;
        ++p;
        i = 1;
    }
}