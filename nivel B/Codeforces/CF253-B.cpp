#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());
    int res = n + 1;

    for(int i = 0; i < n; i++){
        int x = upper_bound(nums.begin(), nums.end(), nums[i]*2) - nums.begin();
        res = min(res, i + n - x);
    }

    cout << res;
}