#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    scanf("%d %d", &n, &p);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string str;
    while(n--) getline(cin, str);
    printf("%d", p);
}