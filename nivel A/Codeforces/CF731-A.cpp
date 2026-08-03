#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int count = 0, step = 0;
    char start = 0;
    cin >> str;
    int s = str.size();

    for(int i = 0; i < s; i++){
        int index = str[i] - 97;
        step = abs(start - index);
        if(step <= 13) count += step;
        else count += 26 - step;
        start = index;
    }

    cout << count;
}