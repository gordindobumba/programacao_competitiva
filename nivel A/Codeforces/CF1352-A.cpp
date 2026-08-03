#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n; cin >> t;

    int arr[4] = {10, 100, 1000, 10000};

    while(t--){
        cin >> n;
        if(n <= 10 || n == 10000) cout << 1 << '\n' << n << '\n';
        else{
            int k = 0;
            vector<int> nums;
            for(int i = 0; i < 4; i++){
                int x = n % arr[i];
                if(x != 0){
                    k += 1;
                    nums.push_back(x);
                    n -= x;
                }
            }

            cout << k << '\n';
            for(int c : nums){
                cout << c << " ";
            }
            cout << '\n';
        }
    }
}