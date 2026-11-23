#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

int main(){
    int n; cin >> n;
    printf("%d:\n", n);
    int k = (n % 2 ? 1 : 0), d;
    
    for(int i = 2; i <= n/2 + k; i++){
        d = (n % (2*i - 1));
        if(d == 0 || d == i)
            printf("%d,%d\n", i, i - 1);
        
        d = (n % (2*i));
        if(d == 0 || d == i){
            printf("%d,%d\n", i, i);
        }
    }
}