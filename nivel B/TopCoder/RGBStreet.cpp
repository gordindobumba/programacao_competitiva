#include <bits/stdc++.h>
using namespace std;

#define N 21
#define INF 1e5
vector<vector<int>> mem(N, vector<int>(4, -1));

int n;
int r[N];
int g[N];
int b[N];

int minCost(int i, int color){
    if(i == n) return 0;

    int &value = mem[i][color];
    if(value != -1) return value;
    value = INF;

    if(color != 0) value = min(value, r[i] + minCost(i + 1, 0));
    if(color != 1) value = min(value, g[i] + minCost(i + 1, 1));
    if(color != 2) value = min(value, b[i] + minCost(i + 1, 2));

    return value;
}

class RGBStreet{
public:
    int estimateCost(vector<string> houses){
        int n = (int)houses.size();
        for(int i = 0; i < n; i++){
            istringstream iss(houses[i]);
            iss >> r[i] >> g[i] >> b[i];
        }

        return minCost(0, 3);
    }
};