#include <bits/stdc++.h>
using namespace std;

int main(){
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int y = floor(13/4);
    cout << "March 29, 2013 " << days[(y + 29 + 2 + 6) % 7];
}