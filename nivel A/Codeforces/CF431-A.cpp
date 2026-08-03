#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cal[4], sum = 0;
    string str;

    cin >> cal[0] >> cal[1] >> cal[2] >> cal[3] >> str;

    for(char c: str){
        switch(c){
            case '1':
                sum += cal[0];
                break;
            case '2':
                sum += cal[1];
                break;
            case '3':
                sum += cal[2];
                break;
            case '4':
                sum += cal[3];
                break;
        }
    }

    cout << sum;
}