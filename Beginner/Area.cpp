// URI Online Judge | 1012 Area
#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, triangle, circle, tpz, square, rac;
  cin >> a >> b >> c;
  triangle = (a * c) / 2.0;
  circle = 3.14159 * (c * c);
  tpz = ((a + b) * c) / 2.0;
  square = b * b;
  rac = a * b;
  cout << "TRIANGULO: " << fixed << setprecision(3) << triangle << endl;
  cout << "CIRCULO: " << fixed << setprecision(3) << circle << endl;
  cout << "TRAPEZIO: " << fixed << setprecision(3) << tpz << endl;
  cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << rac << endl;
}