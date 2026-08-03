#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    vector<string> s;
    while(scanf("%d %d", &x, &y) && x && y){
        if(x + y == 13) printf("Never speak again.\n");
        else if(x > y) printf("To the convention.\n");
        else if(x == y) printf("Undecided.\n");
        else printf("Left beehind.\n");
    }
}