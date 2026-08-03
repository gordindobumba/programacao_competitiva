#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0) printf("Not a moose");
    else if(a != b) printf("Odd %d", 2 * max(a, b));
    else printf("Even %d", 2*b);
}