#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int divisor, dividend, c;

    if (a == 0)
        return b;

    if (b > a)
    {
        dividend = b;
        divisor = a;
    }
    else
    {
        dividend = a;
        divisor = b;
    }

    while (dividend % divisor != 0)
    {
        c = dividend % divisor;
        dividend = divisor;
        divisor = c;
    }
    return divisor;
}
int main()
{
    int n;
    int N1, N2, D1, D2, den, num, temp, tempnum, tempden;
    char c1, c2, c3;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> N1 >> c1 >> D1 >> c2 >> N2 >> c3 >> D2;
        // scanf("%i %c %i %c %i %c %i", &N1, &c1, &D1, &c2, &N2, &c3, &D2);
        if (c2 == '+')
        {
            num = ((N1 * D2) + (N2 * D1));
            den = (D1 * D2);
        }
        else if (c2 == '-')
        {
            num = ((N1 * D2) - (N2 * D1));
            den = (D1 * D2);
        }
        else if (c2 == '*')
        {
            num = (N1 * N2);
            den = (D1 * D2);
        }
        else
        {
            num = (N1 * D2);
            den = (N2 * D1);
        }
        temp = gcd(num, den);
        tempnum = num / temp;
        tempden = den / temp;
        if (tempnum > 0 && tempden > 0)
            cout << num << "/" << den << " = " << tempnum << "/" << tempden << endl;
        else
        {
            if (tempden < 0)
            {
                tempden = -tempden;
                tempnum = -tempnum;
            }
            cout << num << "/" << den << " = " << tempnum << "/" << tempden << endl;
        }
    }
    return 0;
}