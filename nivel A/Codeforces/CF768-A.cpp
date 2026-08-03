#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, s;
    cin >> n;
    vector<int> stewart;

    for(int i = 0; i < n; i++){
        cin >> s;
        stewart.push_back(s);
    }
    if(n < 3) cout << '0';
    else{
        sort(stewart.begin(), stewart.end());
        int count = 0;

        for(int i = 1; i < n - 1; i++){
            if((stewart[i] > stewart[0]) && (stewart[i] < stewart[n - 1])) ++count;
        }
        cout << count;
    }

}