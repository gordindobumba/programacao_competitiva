#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    double q, y, total = 0;
    scanf("%d", &t);
    while(t--){
        scanf("%lf %lf", &q, &y);
        total += q*y;
    }
    printf("%.3lf", total);
}