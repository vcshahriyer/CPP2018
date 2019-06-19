// URI Online Judge | 1021 Banknotes and Coins
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int notes[7] = {100, 50, 20, 10, 5, 2, 1},
        Nqnt[7] = {0, 0, 0, 0, 0, 0, 0},
        Cqnt[5] = {0, 0, 0, 0, 0},
        i = 0, Note, tmp, Coin;
    int coin[5] = {50, 25, 10, 5, 1};
    double n, ctmp;
    cin >> n;
    Note = floor(n);
    ctmp = (n - Note) * 100;
    Coin = floor(ctmp);
    while (Note > 0)
    {
        tmp = Note / notes[i];
        if (tmp > 0)
            Nqnt[i] = tmp;
        Note = Note - (notes[i] * Nqnt[i]);
        i++;
    }
    i = 0;
    while (Coin > 0)
    {
        tmp = Coin / coin[i];
        if (tmp > 0)
            Cqnt[i] = tmp;
        Coin = Coin - (coin[i] * Cqnt[i]);
        i++;
    }
    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << Nqnt[i] << " nota(s) de R$ " << notes[i] << ".00" << endl;
    }
    cout << "MOEDAS:" << endl;
    cout << Nqnt[6] << " moeda(s) de R$ 1.00" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Cqnt[i] << " moeda(s) de R$ " << fixed << setprecision(2) << (coin[i] / 100.00) << endl;
    }
}