#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m, t, a, d;
ll ar[5];

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b){
	return (a*b)/gcd(a, b);
}

ll inc_exc(int id, ll divisor, int sinal, ll numerador){
    if(id == 5){
        return sinal * numerador / divisor;
    }
    return inc_exc(id + 1, divisor, sinal, numerador) + inc_exc(id + 1, lcm(divisor, ar[id]), sinal * -1, numerador);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	cin >> t;
	while (t--){
		cin >> n >> m >> a >> d;
		ar[0] = a;
		ar[1] = a + d;
		ar[2] = a + 2*d;
		ar[3] = a + 3*d;
		ar[4] = a + 4*d;
		cout << inc_exc(0, 1, 1, m) - inc_exc(0, 1, 1, n - 1) << '\n';
	}
	return 0;
}