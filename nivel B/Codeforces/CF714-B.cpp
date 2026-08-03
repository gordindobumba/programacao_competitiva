#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    set<int> nums;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        nums.insert(a);
    }

    if(nums.size() == 1 || nums.size() == 2) cout << "YES";
    else if(nums.size() > 3) cout << "NO";
    else{
        vector<int> v(nums.begin(), nums.end());
        if(abs(v[0] - v[1]) == abs(v[1] - v[2])) cout << "YES";
        else cout << "NO";
    }
}