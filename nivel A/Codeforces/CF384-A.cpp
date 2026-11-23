#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    if(n == 1) printf("1\nC");
    else if(n == 2) printf("2\nC.\n.C");
    else{
        int res = (n * n)/2, e = (n % 2 ? 1 : 0);
        printf("%d\n", res + e);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if((i + j) % 2 == 0) printf("C");
                else printf(".");
            }
            puts("");
        }
    }
}