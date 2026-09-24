#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    char no[300], caminho[300];
    int valor, n, id;
    while(scanf("%s", no) != EOF){
        bool check = true;
        map<int, bool> existe;
        vector<pair<int, int>> arvore;

        while(1){
            if(strcmp(no, "()") == 0) break;
            sscanf(no, "(%d,%s)", &valor, caminho);

            id = 1;
            n = strlen(caminho);
            for(int i = 0; i < n - 1; i++){
                id *= 2;
                if(caminho[i] == 'R') id++;
            }

            if(existe[id]) check = false;
            existe[id] = true;
            arvore.push_back({valor, id});
            scanf("%s", no);
        }

        sort(arvore.begin(), arvore.end(), comp);
        n = arvore.size();
        for(int i = 1; i < n; i++){
            id = arvore[i].second/2;
            if(!existe[id]) check = false;
        }
    
        if(!check || !existe[1]){
            puts("not complete");
            continue;
        }
        for(int i = 0; i < n; i++){
            printf("%d", arvore[i].first);
            if(i != n - 1) printf(" ");
        }
        puts("");
    }
}