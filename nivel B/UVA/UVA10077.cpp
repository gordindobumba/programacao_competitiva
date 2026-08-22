#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef pair<int, int> pii;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    while(cin >> n >> m){
        if(n == 1 && m == 1) break;
        pii atual = {1, 1}, pai, vo;
        string res = "";
        char d = '/';

        if(n * atual.s > m * atual.f) vo = {1, 0};
        else vo = {0, 1};
        pai = atual;

        while(true){
            if(n == atual.f && m == atual.s) break;
            else{
                if(n * atual.s > m * atual.f){
                    res += "R";
                    if(d == 'L'){
                        vo = pai;
                        pai = atual;
                        atual.f = vo.f + pai.f;
                        atual.s = vo.s + pai.s;
                        d = 'R';
                    }
                    else{
                        pai = atual;
                        atual.f += vo.f;
                        atual.s += vo.s;
                        d = 'R';
                    }
                }
                else{
                    res += "L";
                    if(d == 'R'){
                        vo = pai;
                        pai = atual;
                        atual.f = vo.f + pai.f;
                        atual.s = vo.s + pai.s;
                        d = 'L';
                    }
                    else{
                        pai = atual;
                        atual.f += vo.f;
                        atual.s += vo.s;
                        d = 'L';
                    }
                }
            }
        }

        cout << res << '\n';
    }
}