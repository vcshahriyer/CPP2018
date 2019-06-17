// URI Online Judge | 1014 Consumption
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  float y, result;
  cin >> x >> y;
  result = x / y;
  // result = ceilf(result * 1000) / 1000;
  cout << fixed << setprecision(3) << result << " km/l" << endl;
}