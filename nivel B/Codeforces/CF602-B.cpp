#include <bits/stdc++.h>
using namespace std;

void test(){
    freopen("input.txt", "r", stdin);
    freopen("myout.txt", "w", stdout);
}

void scan(int& index, int& num, int& i, vector<int>& v){
    i = index + 1;
    while(v[i] == num) i++;
    num = v[i];
    index = i;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int maior = 1, menor = 100001, res = 0, x = 0;
    int i = 0, j = 0, index1 = 0, index2 = 0;
    while(j < n){
        if(v[j] >= maior){
            maior = v[j];
            index1 = j;
        }
        if(v[j] <= menor){
            menor = v[j];
            index2 = j;
        }
        
        if(maior - menor <= 1) x++;
        else{
            if(v[j] == menor) scan(index1, maior, i, v);
            else scan(index2, menor, i, v);
            x = j - i + 1;
        }
        res = max(res, x);
        j++;
    }

    cout << res;
}