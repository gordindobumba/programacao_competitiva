#include <bits/stdc++.h>
using namespace std;

bool whole(double n){
    return floor(n) == n;
}

int main(){
    int t, a; scanf("%d", &t);
    while(t--){
        scanf("%d", &a);
        double n = 360.0/(180.0 - a);
        if(whole(n)) printf("YES\n");
        else printf("NO\n");
    }
}