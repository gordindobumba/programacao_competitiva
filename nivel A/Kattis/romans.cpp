#include <bits/stdc++.h>
using namespace std;

int main(){
    double x;
    scanf("%lf", &x);
    printf("%d", (int)round(x*1000.0*(5280.0/4854.0)));
}