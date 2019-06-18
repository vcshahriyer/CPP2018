// URI Online Judge | 1018 Banknotes
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, notes[7] = {100, 50, 20, 10, 5, 2, 1}, qnt[7] = {0, 0, 0, 0, 0, 0, 0}, i = 0, ncp, tmp;
    cin >> n;
    ncp = n;
    while (n > 0)
    {
        tmp = (int)n / (int)notes[i];
        if (tmp > 0)
            qnt[i] = tmp;
        n = n - (notes[i] * qnt[i]);
        i++;
    }
    cout << ncp << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << qnt[i] << " nota(s) de R$ " << notes[i] << ",00" << endl;
    }
}