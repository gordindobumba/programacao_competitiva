#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char d;
    string t;
    cin >> d >> t;
    int s = t.length();
    string r = "";

    if(d == 'R'){
        for(int i = 0; i < s; i++){
            char c = t[i];
            switch(c){
                case 'q':
                    c = 'p';
                    break;
                case 'a':
                    c = ';';
                    break;
                case 'z':
                    c = '/';
                    break;
                default:
                    int j = 0;
                    while(keyboard[j] != c) j++;
                    c = keyboard[--j];
            }
            r += c;
        }
    }else{
        for(int i = 0; i < s; i++){
            char c = t[i];
            switch(c){
                case 'p':
                    c = 'q';
                    break;
                case ';':
                    c = 'a';
                    break;
                case '/':
                    c = 'z';
                    break;
                default:
                    int j = 0;
                    while(keyboard[j] != c) j++;
                    c = keyboard[++j];
            }
            r += c;
        }
    }
    cout << r;
}