#include <bits/stdc++.h>
using namespace std;

int main(){
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m;
    scanf("%d %d", &n, &m);
    int i = 0;
    while(primos[i] != n) ++i;
    if(primos[i + 1] == m) cout << "YES";
    else cout << "NO";
}