#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    set<int> nums;
    int x;

    while(n--){
        cin >> x;
        nums.insert(x);
    }

    if((int)nums.size() == 1) cout << "NO";
    else cout << *next(nums.begin(), 1);
}