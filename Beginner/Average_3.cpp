// URI Online Judge | 1040 Average 3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, d, last, average;
    cin >> a >> b >> c >> d;
    average = (a * .2 + b * .3 + c * .4 + d * .1);
    cout << "Media: " << fixed << setprecision(1) << average << endl;
    if (average >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (average >= 5.0)
    {
        cout << "Aluno em exame." << endl;
        cin >> last;
        cout << "Nota do exame: " << last << endl;
        if (last + average / 2.0 > 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << (last + average) / 2.0 << endl;
    }
    else
    {
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}