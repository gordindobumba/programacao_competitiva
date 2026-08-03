#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

bool comparator(int x, int y, pii c1, pii c2){
    return x > c1.first && x < c2.first && y > c1.second && y < c2.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int xmin1, ymin1, xmax1, ymax1, xmin2, ymin2, xmax2, ymax2, xll, yll, xur, yur;
    int t = 0;

    while(n--){
        cin>>xmin1>>ymin1>>xmax1>>ymax1>>xmin2>>ymin2>>xmax2>>ymax2;

        if(!t) t = 1;
        else cout << '\n';

        xll = max(xmin1, xmin2);
        yll = max(ymin1, ymin2);
        xur = min(xmax1, xmax2);
        yur = min(ymax1, ymax2);

        if(xll < xur && yll < yur)cout<<xll<<" "<<yll<<" "<<xur<<" "<<yur;
        else cout << "No Overlap";
    }
}