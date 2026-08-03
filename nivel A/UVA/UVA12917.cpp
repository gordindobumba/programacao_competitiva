#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, h, o;
    while(scanf("%d %d %d", &p, &h, &o)){
        if(p <= o - h) printf("Props win!\n");
        else printf("Hunters win!\n"); 
    }
}