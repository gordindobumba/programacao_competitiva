#include <bits/stdc++.h>
using namespace std;

int divide(vector<int> folders, int m){
    int sum_group = folders[0];
    int groups = 0;
    for(int i = 1; i < (int)folders.size(); i++){
        if(sum_group + folders[i] <= m) sum_group += folders[i];
        else{
            ++groups;
            sum_group = folders[i];
        }
    }

    return groups;
}

class FairWorkload{
public:
    int getMostWork(vector<int> folders, int workers){
        int r = accumulate(folders.begin(), folders.end(), 0);
        int l = *max_element(folders.begin(), folders.end());

        while(l <= r){
            int m = l + (r - l)/2;
            if(divide(folders, m) <= workers) r = m - 1;
            else l = m + 1;
        }

        return l;
    }
};