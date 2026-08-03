#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> queue(n + 1);

    int snack = n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        queue[num] = 1;
        while(queue[snack] == 1){
            cout << snack << ' ';
            snack--;
        }

        cout << '\n';
    }
}