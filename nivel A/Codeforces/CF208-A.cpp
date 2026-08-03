#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string dubstep, text = "";
    cin >> dubstep;
    
    while(dubstep.length() > 0){
        if(dubstep.substr(0, 3) == "WUB") dubstep.erase(0, 3);
        else{
            while(true){
                text += dubstep[0];
                dubstep.erase(0, 1);
                if(dubstep.length() < 3){
                    text += dubstep;
                    dubstep.clear();
                    break;
                }
                if(dubstep.substr(0, 3) == "WUB") break;
            }
            text += " ";
        }
    }

    cout << text;
}