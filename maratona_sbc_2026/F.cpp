#include <bits/stdc++.h>
using namespace std;
 
#define f first
#define s second
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
 
    queue<pair<int, pair<int, int>>> q;
    q.push({1, {2, 3}});
    int i = 1;
    while(q.front().first != n){
        i++;
        if(q.front().s.f == i){
            q.push({i, {q.front().s.s, i * 3}});
            q.pop();
        }
        else q.push({i, {q.back().s.f + 1, i * 3}});
    }
 
    cout << q.front().s.f << '\n';
}