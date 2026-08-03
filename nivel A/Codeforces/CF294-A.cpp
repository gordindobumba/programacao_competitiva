#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, l;
    vector<int> lines;
    int m, x, y;
    cin >> n;

    while(n--){
        cin >> l;
        lines.push_back(l);
    }

    cin >> m;
    while(m--){
        cin >> x >> y;
        --x;
        
        if(x != 0){
            lines[x - 1] += y - 1;
        }

        if(x != n - 1){
            lines[x + 1] += lines[x] - y;
        }

        lines[x] = 0;
    }

    for(int b : lines){
        cout << b << "\n";
    }
}