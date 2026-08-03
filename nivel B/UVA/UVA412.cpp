#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    if(b == 0) return a;
    return mdc(b, a % b);
}

int triang(int n){
    return ((n - 1)*n)/2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while(cin >> n, n){
        vector<int> nums(n);
        int t = triang(n);

        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());
        int q = 0;

        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(mdc(nums[i], nums[j]) == 1) q++;
            }
        }

        if(!q) cout << "No estimate for this data set.\n";
        else cout << fixed << setprecision(6) << sqrt((6*t*1.0)/q) << '\n';
    }
}