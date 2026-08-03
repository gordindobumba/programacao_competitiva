#include <bits/stdc++.h>
using namespace std;

int main(){
    int g, s, c;
    scanf("%d %d %d", &g, &s, &c);
    int valor = g*3 + s*2 + c;
    string best_victory = "none", best_treasure = "Copper";
    if(valor >= 8){
        best_victory = "Province";
    }else if(valor >= 5){
        best_victory = "Duchy";
    }else if(valor >= 2){
        best_victory = "Estate";
    }

    if(valor >= 6){
        best_treasure = "Gold";
    }else if(valor >= 3){
        best_treasure = "Silver";
    }
    
    if(best_victory != "none") cout << best_victory + " or ";
    cout << best_treasure;
}