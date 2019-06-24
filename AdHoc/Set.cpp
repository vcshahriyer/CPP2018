// URI Online Judge | 1090 Set
#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        string a, b;
        int um, dois, tres, circulo, quadrado, triangulo, rslt1, rslt2;
        um = dois = tres = circulo = quadrado = triangulo = rslt1 = rslt2 = 0;
        int minimum = INF;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a == "um")
                um++;
            else if (a == "dois")
                dois++;
            else if (a == "tres")
                tres++;

            if (b == "circulo" or b == "circulos")
                circulo++;
            else if (b == "quadrado" or b == "quadrados")
                quadrado++;
            else if (b == "triangulo" or b == "triangulos")
                triangulo++;
        }
        if (minimum > um)
            minimum = um;
        if (minimum > dois)
            minimum = dois;
        if (minimum > tres)
            minimum = tres;
        um = um - minimum;
        dois = dois - minimum;
        tres = tres - minimum;
        rslt1 = minimum + (um / 3) + (dois / 3) + (tres / 3);

        minimum = INF;
        if (minimum > circulo)
            minimum = circulo;
        if (minimum > quadrado)
            minimum = quadrado;
        if (minimum > triangulo)
            minimum = triangulo;

        circulo = circulo - minimum;
        quadrado = quadrado - minimum;
        triangulo = triangulo - minimum;
        rslt2 = minimum + (circulo / 3) + (quadrado / 3) + (triangulo / 3);

        minimum = min(rslt1, rslt2);
        cout << minimum << endl;
        // cout << "um: " << um << " dois: " << dois << " tres: " << tres << " circulo: " << circulo << " quadrado: " << quadrado << " triangulo: " << triangulo;
    }
}