#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x, y; scanf("%d", &t);
    while(t--){
        scanf("%d %d", &x, &y);
        printf("%d\n", (int) (ceil((x - 1.0)/3.0) * ceil((y - 1.0)/3.0)));
    }
}