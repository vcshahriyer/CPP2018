// URI Online Judge | 1020 Age in Days
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, y, m, d;
    cin >> n;
    y = n / 365;
    n = n - (365 * y);
    m = n / 30;
    n = n - (30 * m);
    d = n;
    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
}