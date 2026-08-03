#include <bits/stdc++.h>
using namespace std;

#define N 200005

void action7(vector<int> nums, int n){
    bool visited[n];
    memset(visited, false, sizeof(visited));
    int i = 0;
    while(1){
        if(i >= n){
            cout << "Out\n";
            break;
        }

        if(visited[i]){
            cout << "Cyclic\n";
            break;
        }

        if(i == n - 1){
            cout << "Done\n";
            break;
        }

        visited[i] = true;
        i = nums[i];
    }
}

void action6(vector<int> nums, int n){
    char letters[n];
    for(int i = 0; i < n; i++){
        letters[i] = (char)(nums[i] % 26) + 97;
    }

    cout << string(letters, n);
}

void action5(vector<int> n){
    long long sum = 0;
    for(int x : n){
        if(x % 2 == 0) sum += x;
    }
    cout << sum << '\n';
}

void action4(vector<int> n){
    long long sum = 0;
    for(int x : n){
        sum += x;
    }
    cout << sum << '\n';
}

void action3(int a, int b, int c){
    int arr[] = {a,b,c};
    sort(arr, arr + 3);
    cout << arr[1] << '\n';
}

void action2(int a, int b){
    if(a > b) cout << "Bigger\n";
    else if(a == b) cout << "Equal\n";
    else cout << "Smaller";
}

void action1(){
    cout << "7\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t; cin>>n>>t;

    vector<int> nums(N);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    switch(t){
        case 1: action1(); break;
        case 2: action2(nums[0], nums[1]); break;
        case 3: action3(nums[0], nums[1], nums[2]); break;
        case 4: action4(nums); break;
        case 5: action5(nums); break;
        case 6: action6(nums, n); break;
        case 7: action7(nums, n); break;
    }
}