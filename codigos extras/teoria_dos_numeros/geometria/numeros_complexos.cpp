#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1.0);
const double EPS = 1e-9;

typedef complex<double> ponto;
#define X real()
#define Y imag()
#define angulo(a) atan2((a).imag(), (a).real())

#define vetor(a, b) ((b) - (a))
#define prod_e(a, b) (conj(a)*(b)).real()
#define prod_v(a, b) (conj(a)*(b)).imag()
#define igual(a, b) prod_e(vetor(a, b), vetor(a, b)) < EPS

#define modulo(a) hypot((a).real(), (a).imag())
#define normal(a) (a)/modulo(a)

#define girar_origem(p, ang) (p)*exp(ponto(0, ang))
#define girar_ponto(p, ang, ponto) (girar_origem(vetor(ponto, p), ang) + ponto)
#define refletir_origem(v, m) conj((v)/(m))*(m)

ponto refletir(ponto p, ponto p0, ponto p1){
    ponto z = p - p0, w = p1 - p0;
    return conj(z / w) * w + p0;
}

double ajuste(double ang){
    return ang > 1 ? 1 : (ang < 0 ? 0 : ang);
}

double angulo_origem(ponto a, ponto ori, ponto b){
    ponto p1(a - ori), p2(b - ori);
    return acos(ajuste(prod_e(p1, p2) / modulo(p1) / modulo(p2)));
}

int comparar_double(double a, double b){
    return fabs(a - b) <= EPS ? 0 : a < b ? -1 : 1;
}

double get_angulo(ponto &a, ponto &b, ponto &c){
    double ang = angulo(vetor(b, c)) - angulo(vetor(b, a));
    if(comparar_double(ang, 0) == 0) ang += 2*pi;
    return ang;
}

int main(){
    ponto p1(2, 3); // 2 + 3i
    cout << p1.real() << " + " << p1.imag();

    ponto p2(1, 1);
    double modulo = abs(p2);                // r = 1.41421...
    double argumento = arg(p2);             // theta = 0.785398...
    double angulo = argumento * 180/pi;     // grau = 45
    double magnitude = norm(p2);            // 1*1 + 1*1 = 2

    ponto p3 = polar(1.41421, 0.785398);    // (0.999998, 0.999997)

    ponto a (10, 10);
	ponto m1 (1, 0);
	ponto m2 (0, 1);

	cout<< a << " refletido ao torno de " << m1 << " = " << refletir_origem(a, m1) << "\n";
	// (10, 10) refletido ao torno de (1, 0) = (10, -10)

	cout<< a << " refletido ao torno de " << m2 << " = " << refletir_origem(a, m2) << "\n";
	// (10, 10) refletido ao torno de (0, 1) = (-10, 10)
}