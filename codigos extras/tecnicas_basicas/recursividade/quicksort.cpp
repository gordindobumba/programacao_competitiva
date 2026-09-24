#include <bits/stdc++.h>
using namespace std;

int p_sort(vector<int> &v, int l, int r){
    int i = l, j = l;
    while(j < r){
        if(v[j] <= v[r]){
            if(j - i != 0) swap(v[i], v[j]);
            i++;
        }
        j++;
    }

    swap(v[i], v[j]);
    return i;
}

void quicksort(vector<int> &v, int l, int r){
    int p = p_sort(v, l, r);
    
    if(p > l) quicksort(v, l, p - 1);
    if(p < r) quicksort(v, p + 1, r);
}

int main(){
    vector<int> v = {16, 31, 97, 73, 23, 85, 13, 45, 12, 10, 64};
    int n = v.size();
    quicksort(v, 0, n - 1);
    for(auto x : v){
        cout << x << " ";
    }
}