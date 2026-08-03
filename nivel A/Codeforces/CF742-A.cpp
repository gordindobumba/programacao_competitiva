#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    if(n == 0) printf("1");
    else{
        n %= 4;
        switch(n){
            case 0:
                printf("6");
                break;
            case 1:
                printf("8");
                break;
            case 2:
                printf("4");
                break;
            default:
                printf("2");
                break;
        }
    }
}