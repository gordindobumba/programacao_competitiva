#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string scale, weights, left, right;
    cin >> scale;
    
    int bar = scale.find('|');
    left = scale.substr(0, bar);
    right = scale.substr(bar + 1);

    cin >> weights;

    for(auto w : weights){
        if(left.size() <= right.size()) left += w;
        else right += w;
    }

    cout << (left.size() == right.size() ? left + '|' + right : "Impossible");
}
