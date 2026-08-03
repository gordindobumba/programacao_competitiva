#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

// divisão e conquista
// 10^16 = (10^8)^2
// 10^17 = (10^8)^2 * 10
// complexidade = O(log b)
ull pot(int a, int b){  // a^b
    if(b == 0) return 1;
    ull q = pot(a, b/2);

    q = q*q;
    if(b % 2 == 1){
        q = q*a;
    }

    return q;
}


// e se quisermos calcular soma de potencias?
// (a + a^2 + a^3 + a^4 + a^5 ... + a^n)
// se n for par:
// (a + a^2 + a^3 + a^4 + a^5 + a^6) = (a + a^2 + a^3) + (a*a^3 + a^2*a^3 + a^3*a^3)
// = (a + a^2 + a^3) + a^3(a + a^2 + a^3)
// = (a + a^2 + a^3)(1 + a^3)
// = (a + a^2 + a^3)(1 + (a + a^2 + a^3) - (a + a^2))

// se n for impar:
// (a + a^2 + a^3 + a^4 + a^5 + a^6 + a^7) = a + a(a + a^2 + a^3 + a^4 + a^5 + a^6)
// = a(1 + (a + a^2 + a^3 + a^4 + a^5 + a^6))

// complexidade = O(n)
ull soma_pots(ull a, int n){
    if(n == 0) return 0;

    if(n % 2 == 1) return a * (1 + soma_pots(a, n - 1));

    ull metade = soma_pots(a, n / 2);
    return metade * (1 + metade - soma_pots(a, n/2 - 1));
}