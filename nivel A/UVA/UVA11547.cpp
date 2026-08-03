#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int r = (((n * 567)/9 + 7492) * 235)/47 - 498;
        if(r < 0) r = abs(r);
        printf("%d\n", (r % 100)/10);
    }
}