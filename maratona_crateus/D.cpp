#include <bits/stdc++.h>
using namespace std;

void testar(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

map<int, int> nums;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int x;
    vector<int> res;
    for(int i = 0; i < n; i++){
        cin >> x;
        nums[x]++;
    }

    for(auto v : nums){
        cout << v.first << " aparece " << v.second << " vez(es)\n";
    }


}