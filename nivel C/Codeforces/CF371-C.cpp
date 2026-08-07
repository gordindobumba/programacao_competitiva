#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int b, s, c;
int pb, ps, pc;

ll hamburgers(ll m, int qt_b, int qt_s, int qt_c){
    ll price1 = max((ll)0, (m * qt_b - b) * pb);
    ll price2 = max((ll)0, (m * qt_s - s) * ps);
    ll price3 = max((ll)0, (m * qt_c - c) * pc);
    return price1 + price2 + price3;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string h; cin >> h;
    cin >> b >> s >> c;
    cin >> pb >> ps >> pc;

    ll rub; cin >> rub;
    int s = h.length();

    int qt_b = 0, qt_s = 0, qt_c = 0;
    for(int i = 0; i < s; i++){
        switch(h[i]){
            case 'B': qt_b++; break;
            case 'S': qt_s++; break;
            case 'C': qt_c++; break;
        }
    }

    ll l = 1, r = rub + 100;

    while(l <= r){
        ll m = l + (ll)(r - l)/2;
        if(hamburgers(m, qt_b, qt_s, qt_c) > rub)
            r = m - 1;
        else
            l = m + 1;
    }

    cout << r;
}