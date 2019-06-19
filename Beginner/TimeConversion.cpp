// URI Online Judge | 1019 Time Conversion
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, m, s;
    cin >> n;
    h = n / 3600;
    n = n - (3600 * h);
    m = n / 60;
    n = n - (60 * m);
    s = n;
    cout << h << ":" << m << ":" << s << endl;
}