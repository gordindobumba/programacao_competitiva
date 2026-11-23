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

    int n, x, nota; cin >> n;
    while(n--){
        cin >> x;
        vector<int> notas;
        int total = 0;
        double media;

        for(int i = 0; i < x; i++){
            cin >> nota;
            total += nota;
            notas.push_back(nota);
        }

        media = (double)total / (double)x;
        int acima = 0;
        for(int i = 0; i < x; i++){
            if(notas[i] > media) acima++;
        }

        cout << fixed << setprecision(3) << ((double)acima / (double)x) * 100.0 << "%\n";
    }
}