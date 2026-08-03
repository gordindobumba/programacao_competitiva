#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, faces = 0;
    string polygon;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> polygon;
        if(polygon == "Tetrahedron"){
            faces += 4;
        }else if(polygon == "Cube"){
            faces += 6;
        }else if(polygon == "Octahedron"){
            faces += 8;
        }else if(polygon == "Dodecahedron"){
            faces += 12;
        }else{
            faces += 20;
        }
    }
    cout << faces;
}