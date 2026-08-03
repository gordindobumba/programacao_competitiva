#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> // para acessar as estruturas do g++, tem que incluir essa biblioteca
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
// podemos definir a estrutura indexed_set que funciona como um set mas que pode usar indexes como um array

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* Bitset */
    
    // É um array onde cada valor é 0 ou 1
    bitset<10> bis;
    bis[1] = 1;
    bis[4] = 1;
    cout << bis[4] << "\n"; // 1
    cout << bis[5] << "\n"; // 0
    // Eles podem ser úteis porque cada espaço é 1 bit de memória ao invés de 8
    // Também podemos manipular strings de texto para converter em bitset
    bitset<10> bis2(string("0110100101")); // Converte da direita pra esquerda
    cout << bis2[4] << "\n"; // 0
    cout << bis2[5] << "\n"; // 1
    cout << bis2.count() << "\n"; // 5 (count retorna quantos 1s o bitset tem)
    // Podemos tambem fazer operaçoes bit a bit
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110

    
    /* Deque */

    // Vetor dinâmico onde pode colocar ou remover elementos tanto no fim quanto no início
    deque<int> d;
    d.push_back(2); // Coloca no fundo
    d.push_front(1); // Coloca na frente
    d.pop_back(); // Remove o ultimo elemento
    d.pop_front(); // Remove o primeiro elemento
    // É um pouco mais lento que um vetor mas também possui complexidade O(1) tanto pra adicionar no fim quanto no início

    
    /* Stack */

    // Estrutura similar à pilha em C, pode somente colocar ou tirar elementos no topo (FILO/LIFO)
    stack<int> s;
    s.push(3); // 3
    s.push(7); // 3 -> 7
    s.push(5); // 3 -> 7 -> 5
    s.pop(); // 3 -> 7
    s.top(); // 7
    // Somente o topo é acessível
    // Também possui complexidade O(1)


    /* queue */

    // Estrutura similar à fila em C, pode somente adicionar elementos no fim e tirar elementos no início (FIFO/LILO)
    queue<int> q;
    q.push(4); // 4
    q.push(2); // 4 -> 2
    q.push(3); // 4 -> 2 -> 3
    q.pop(); // 2 -> 3
    q.front(); // 2
    q.back(); // 3
    // Somente os elementos na frente e no fundo são acessíveis
    // Também possui complexidade O(1)


    /* Priority queue */

    // Fila que ordena seus elementos baseado em prioridade (crescente ou decrescente); o padrão em C++ é decrescente
    priority_queue<int> pq;
    pq.push(7); // 7
    pq.push(4); // 7 -> 4
    pq.push(5); // 7 -> 5 -> 4
    pq.push(6); // 7 -> 6 -> 5 -> 4
    pq.pop(); // 6 -> 5 -> 4
    // Ele usa uma estrutura heap para realizar a ordenação, o que o faz mais eficiente que um set que usa árvore balanceada
    // Adicionar e remover tem complexidade O(log n), acessar o início ou fim tem complexidade O(1)
    priority_queue<int,vector<int>,greater<int>> pq_crescente; // Para criar p_q com prioridade crescente


    /* Estruturas do g++ (policy-based data structures) */

    // Existem estruturas que o g++ aceita mas não estão no c++ normal
    // Por exemplo um set com indexes como array, que chamaremos de indexed_set
    indexed_set is;
    is.insert(2);
    is.insert(3);
    is.insert(7);
    is.insert(9);
    // Podemos usar a função find_by_order para devolver um iterador que recebe o elemento indexado
    auto x = is.find_by_order(2); // 7
    // E também tem a função order_of_key que retorna a posição do elemento
    int n = is.order_of_key(7); // 2
    // Se o elemento não estiver no set, a função retorna onde estaria se estivesse no set
    int m = is.order_of_key(8); // 3

}