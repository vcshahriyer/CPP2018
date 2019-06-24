// URI Online Judge | 1103 Alarm Clock
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h1, m1, h2, m2, result, mindiff;
    while (cin >> h1 >> m1 >> h2 >> m2 && (h1 != 0 | h2 != 0 | m1 != 0 | m2 != 0))
    {
        if (h1 == h2 && m1 > m2)
        {
            mindiff = m1 - m2;
            result = (24 * 60) - mindiff;
        }
        else if (h1 <= h2)
        {
            result = (h2 - h1) * 60;
            if (m1 > m2)
                mindiff = m1 - m2;
            else
                mindiff = m1 - m2;
            result -= mindiff;
        }
        else
        {
            result = 24 - h1;
            result = result + (h2 % 24);
            if (m1 > m2)
                mindiff = m1 - m2;
            else
                mindiff = m1 - m2;
            result = result * 60;
            result -= mindiff;
        }
        cout << result << endl;
    }
}