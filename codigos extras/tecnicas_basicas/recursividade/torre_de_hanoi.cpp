#include <bits/stdc++.h>
using namespace std;

void hanoi(int discos, char origem, char destino, char auxiliar){
    if(discos == 1) printf("movendo disco 1 de %c para %c\n", origem, destino);

    else{
        hanoi(discos - 1, origem, auxiliar, destino);
        printf("movendo disco %d de %c para %c\n", discos, origem, destino);
        hanoi(discos - 1, auxiliar, destino, origem);
    }
}

int main(){
    int discos = 3;
    hanoi(discos, 'A', 'B', 'C');
}