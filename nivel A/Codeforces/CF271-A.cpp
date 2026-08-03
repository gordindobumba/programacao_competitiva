#include <bits/stdc++.h>
using namespace std;

bool verify(int n){
    int d = n % 10;
    int t = ((n - d) / 10) % 10;
    int h = ((n - t*10 - d) / 100) % 10;
    int m = ((n - h * 100 - t * 10 - d) / 1000) % 10;
    return d == t || t == h || h == m || d == h || t == m || d == m;
}

int main(){
    int n; scanf("%d", &n);

    for(int i = n + 1; i < 10000; i++){
        if(!verify(i)){
            printf("%d", i);
            break;
        }
    }
}