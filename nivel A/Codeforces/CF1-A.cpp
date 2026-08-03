#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

int main(){
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    ull s1 = (int)(ceil((double) n / a));
    ull s2 = (int)(ceil((double) m / a));
    ull f = s1 * s2;
    cout << f;
}