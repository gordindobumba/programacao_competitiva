#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    while(n--){
        string n1, n2; cin >> n1 >> n2;

        reverse(n1.rbegin(), n1.rend());
        reverse(n2.rbegin(), n2.rend());

        int s = max((int)n1.length(), (int)n2.length());
        vector<int> arr(s + 1, 0);

        if(n1.length() < n2.length()) n1.insert(0, s - (int)n1.length(), '0');
        else if(n2.length() < n1.length()) n2.insert(0, s - (int)n2.length(), '0');

        for(int i = s; i > 0; i--){
            arr[i] = (n1[i - 1] - '0') + (n2[i - 1] - '0');
        }

        for(int i = s; i > 0; i--){
            while(arr[i] >= 10){
                arr[i - 1] += 1;
                arr[i] -= 10;
            }
        }

        if(arr[0] == 0) arr.erase(arr.begin());
        int i = (int)arr.size() - 1;
        while(arr[i] == 0){
            arr.erase(arr.begin() + i);
            i--;
        }

        reverse(arr.rbegin(), arr.rend());
        for(int x : arr){
            cout << x;
        }
        cout << '\n';
    }
}