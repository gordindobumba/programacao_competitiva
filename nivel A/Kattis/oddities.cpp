#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &d);
        if(d % 2 == 0) printf("%d is even\n", d);
        else printf("%d is odd\n", d);
    }
}

