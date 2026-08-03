#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, n, p, total = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    while(n--){
        scanf("%d", &p);
        total += x - p;
    }
    printf("%d", total + x);
}