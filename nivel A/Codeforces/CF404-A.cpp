#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char text[305][305], p, s;
    bool f = false;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", text[i]);
        for(int j = 0; j < n; j++){
            p = text[0][0];
            s = text[0][1];
            if(i == j){
                if(p != text[i][j]) f = true;
            }else if(i == n - j - 1){
                if(p != text[i][j]) f = true;
            }else{
                if(s != text[i][j] || p == text[i][j]) f = true;
            }
        }
    }

    if(f) printf("NO");
    else printf("YES");
}