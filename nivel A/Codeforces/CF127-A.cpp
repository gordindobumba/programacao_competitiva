#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    double k;
    vector<pair<double, double>> coords;
    cin >> n >> k;
    double soma = 0.0;
    for(int i = 0; i < n; i++){
        double x, y;
        cin >> x >> y;
        coords.push_back(make_pair(x, y));
        if(i > 0){
            soma += sqrt(pow((coords[i].first - coords[i - 1].first), 2) + pow((coords[i].second - coords[i - 1].second), 2));
        }
    }

    cout << fixed << setprecision(10) << (soma * k) / 50.0;
}