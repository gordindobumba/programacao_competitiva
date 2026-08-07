#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
vector<vector<ll>> mem(21, vector<ll>(101, -1));

ll maxProd(int i, int remain){
    if(i == n){
        if(remain == 0) return 1;
        return 0;
    }
    if(remain == 0) return 0;

    ll &ans = mem[i][remain];
    if(ans != -1) return ans;

    for(int j = 1; j <= remain; j++){
        ll sum = maxProd(i + 1, remain - j) * j;
        ans = max(ans, sum);
    }

    return ans;
}

class MaximalProduct{
public:
    ll maximalProduct(int s, int k){
        n = k;
        return maxProd(0, s);
    }
};