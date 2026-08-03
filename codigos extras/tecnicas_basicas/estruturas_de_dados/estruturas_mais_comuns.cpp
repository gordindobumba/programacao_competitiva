#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* Vetor */
    vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3, 2]
    v.push_back(5); // [3, 2, 5]

    for(int i : v){
        cout << i << '\n';
    }

    cout << v.back() << '\n'; // 5
    cout << v.front() << '\n'; // 3

    vector<int> inicializado = {3, 2, 5};
    vector<int> iniciar_com_0s (10);
    vector<int> iniciar_com_5s (10, 5);

    
    // Strings também são estruturas

    string a = "hatti";
    string b = a+a;
    cout << b << "\n"; // hattihatti
    b[5] = 'v';
    cout << b << "\n"; // hattivatti
    string c = b.substr(3,4);
    cout << c << "\n"; // tiva


    /* Set */

    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0
    s.erase(3);
    s.insert(4);
    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1

    // Sets mantém seus elementos ordenados, complexidade = O(n)
    // Também há unordered_set que mantém elementos na ordem que são inseridos, complexidade = O(1)
    
    set<int> iniciar = {2, 4, 5};
    iniciar.insert(5);
    cout << iniciar.count(5) << "\n"; // 1 (elementos são sempre distintos em um set)

    // Também há multiset e unordered_multiset, que são sets que podem ter números repetidos
    s.erase(5); // Remove todas as instâncias de um elemento
    s.erase(s.find(5)); // Remove somente uma instância de um elemento


    /* Map */

    // Um map é um tipo de array onde cada chave tem um index próprio, podendo ser qualquer coisa
    map<string,int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3

    // Um map normal usa árvore balanceada com tempo O(log n), e um unordered_map usa hash com tempo O(1)

    cout << m["aybabtu"] << "\n"; // 0
    // Se chamar um elemento que não está no map, ele o adicionará com index 0

    if (m.count("aybabtu")) {
        // Verifica se a chave existe no map
    }

}