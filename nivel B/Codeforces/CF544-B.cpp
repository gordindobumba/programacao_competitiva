#include <bits/stdc++.h>
using namespace std;

int n, k;

void print(int j){
    for(int i = j; i < n + j; i++){
        if((i % 2) == 0 && k > 0){
            cout << 'L';
            k--;
        }
        else cout << 'S';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    if((n % 2 == 1 && k > (n*n)/2 + 1) || (n % 2 == 0 && k > (n*n)/2))
        cout << "NO";
    else{
        cout << "YES\n";
        if(n % 2){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if((i + j) % 2 == 0 && k > 0){
                        k--;
                        cout << 'L';
                    }
                    else cout << 'S';
                }
                cout << '\n';
            }
        }
        else{
            for(int i = 0; i < n; i++){
                print(i);
                cout << '\n';
            }
        }
    }
}