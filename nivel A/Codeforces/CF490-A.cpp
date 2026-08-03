#include <bits/stdc++.h>

#define vi vector<int>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    vi group1, group2, group3;
    vi index1, index2, index3;
    int e, i = 1;

    cin >> n;
    while(n--){
        cin >> e;
        switch(e){
            case 1:
                group1.push_back(e);
                index1.push_back(i);
                break;
            case 2:
                group2.push_back(e);
                index2.push_back(i);
                break;
            case 3:
                group3.push_back(e);
                index3.push_back(i);
                break;
        }
        i++;
    }
    
    int s1 = group1.size(), s2 = group2.size(), s3 = group3.size();
    vector<int> groups;

    groups.push_back(s1);
    groups.push_back(s2);
    groups.push_back(s3);
    
    sort(groups.begin(), groups.end());
    int count = groups[0];
    cout << count << '\n';
    for(int i = 0; i < count; i++){
        cout << index1[i] << ' ' << index2[i] << ' ' << index3[i] << '\n';
    }
}