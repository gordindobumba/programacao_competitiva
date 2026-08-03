#include <bits/stdc++.h>
using namespace std;

int main(){
    int r1, r2, c1, c2, d1, d2;
    scanf("%d %d", &r1, &r2);
    scanf("%d %d", &c1, &c2);
    scanf("%d %d", &d1, &d2);

    if(r1 + r2 != c1 + c2 || r1 + r2 != d1 + d2 || c1 + c2 != d1 + d2) printf("-1");
    else{
        int t = r1 + r2;

        int a1 = (t - c2 - r2 + d1)/2;
        int a2 = (t - c1 - r2 + d2)/2;
        int a3 = (t - r1 - c2 + d2)/2;
        int a4 = (t - r1 - c1 + d1)/2;

        set<int> gemas;
        gemas.insert(a1);
        gemas.insert(a2);
        gemas.insert(a3);
        gemas.insert(a4);

        if(gemas.size() < 4) printf("-1");
        else if(a1 > 9 || a2 > 9 || a3 > 9 || a4 > 9) printf("-1");
        else if(a1 < 1 || a2 < 1 || a3 < 1 || a4 < 1) printf("-1");
        else printf("%d %d\n%d %d", a1, a2, a3, a4);
    }
}