#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> shoes;
    int shoe;
    for(int i = 0; i < 4; i++){
        cin >> shoe;
        shoes.insert(shoe);
    }

    cout << 4 - shoes.size();
}