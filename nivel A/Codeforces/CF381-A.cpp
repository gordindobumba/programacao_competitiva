#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, c;
    vector<int> cards;

    cin >> n;
    while(n--){
        cin >> c;
        cards.push_back(c);
    }

    int sereja = 0, dima = 0;
    int s = cards.size();
    int i = 0;
    while(s > 0){
        if(i % 2 == 0){
            if(cards.back() > cards.front()){
                sereja += cards.back();
                cards.pop_back();
            }
            else{
                sereja += cards.front();
                cards.erase(cards.begin());
            }
        }else{
            if(cards.back() > cards.front()){
                dima += cards.back();
                cards.pop_back();
            }
            else{
                dima += cards.front();
                cards.erase(cards.begin());
            }
        }
        i++;
        s = cards.size();
    }

    cout << sereja << " " << dima;
}