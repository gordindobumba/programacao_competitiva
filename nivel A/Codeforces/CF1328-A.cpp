#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
	
	int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int r = (a % b);
        cout << (r == 0 ? r : b - r) << '\n';
    }
	return 0;
}