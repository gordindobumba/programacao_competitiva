#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long int x;
    string str;

    cin >> n >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // q poiqueira e essa
    int count = 0;

    while(n--){
        getline(cin, str);
        int s = str.size();
        int packs = stoi(str.substr(2, (s - 2)));
        if(str[0] == '+'){
            x += packs;
        }else{
            if(packs > x) count += 1;
            else x -= packs;
        }
    }

    cout << x << " " << count;
}