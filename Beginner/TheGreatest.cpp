// URI Online Judge | 1013 The Greatest
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, maior;
  cin >> a >> b >> c;
  maior = (a + b + abs(a - b)) / 2;
  a = maior;
  b = c;
  maior = (a + b + abs(a - b)) / 2;
  cout << maior << " eh o maior" << endl;
}