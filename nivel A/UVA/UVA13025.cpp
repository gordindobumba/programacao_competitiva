#include <bits/stdc++.h>
using namespace std;

int main(){
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "May 29, 2013 " << days[(2013 + 2013/4 - 2013/100 + 2013/400 + 0 + 29) % 7] << '\n';
}