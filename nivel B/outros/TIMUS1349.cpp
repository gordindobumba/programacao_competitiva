#include <iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    if(n == 0 || n > 2) printf("-1");
    if(n == 1) printf("1 2 3");
    if(n == 2) printf("3 4 5");
}