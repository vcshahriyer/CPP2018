// URI Online Judge | 1036 Bhaskara's Formula
#include <bits/stdc++.h>
using namespace std;

int main() {
  float a, b, c, x1, x2, sqt;
  cin >> a >> b >> c;
  if (a == 0) {
    cout << "Impossivel calcular" << endl;
    return 0;
  }
  sqt = pow(b, 2) - (4 * a * c);
  if (sqt < 0) {
    cout << "Impossivel calcular" << endl;
    return 0;
  }
  x1 = ((-1 * b) + sqrt(sqt)) / (2 * a);
  x2 = ((-1 * b) - sqrt(sqt)) / (2 * a);
  cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
  cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
}