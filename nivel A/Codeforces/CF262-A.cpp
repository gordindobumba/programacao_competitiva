#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;

    vector<string> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int res = 0;
    for(string s : nums){
        int l = 0;
        for(int i = 0; i < (int)s.size(); i++){
            if(s[i] == '4' || s[i] == '7') l++;
        }
        if(l <= k) res++;
    }

    cout << res;
}