#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, p, i = 1;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &n, &k, &p);
        printf("Case %d: %d\n", i, ((p - 1 + k) % n) + 1);
        ++i;
    }
}