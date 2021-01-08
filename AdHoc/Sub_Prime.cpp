// URI Online Judge | 1105 Sub - prime
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b[22], bn, nn, d, c, v;
start:
    while (cin >> bn >> nn && bn != 0 && nn != 0)
    {
        for (int i = 0; i < bn; i++)
            cin >> b[i];

        for (int i = 0; i < nn; i++)
        {
            cin >> d >> c >> v;
            b[d - 1] = b[d - 1] - v;
            b[c - 1] = b[c - 1] + v;
        }
        for (int i = 0; i < bn; i++)
        {
            if (b[i] < 0)
            {
                cout << "N" << endl;
                goto start;
            }
        }
        cout << "S" << endl;
    }
}