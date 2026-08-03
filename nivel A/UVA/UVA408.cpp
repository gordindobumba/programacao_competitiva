#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n1, n2;
    while(cin >> n1 && n1 != -1){
        cin >> n2;
        string choice;
        if(gcd(n1, n2) == 1) choice = "Good Choice";
        else choice = "Bad Choice";

        int space1, space2;
        space1 = 10 - to_string(n1).length();
        space2 = 10 - to_string(n2).length();
        string s1 = "", s2 = "";
        for(int i = 0; i < space1; i++){
            s1 += " ";
        }
        s1 += to_string(n1);
        for(int i = 0; i < space2; i++){
            s2 += " ";
        }
        s2 += to_string(n2);
        cout << s1 << s2 << "    " << choice << "\n\n";
    }
}