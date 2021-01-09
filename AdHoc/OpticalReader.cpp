// URI Online Judge | 1129 Optical Reader
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d, e;
    vector<char> res;
    while (scanf("%d", &n) && n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b >> c >> d >> e;
            if (a <= 127)
                res.push_back('A');
            if (b <= 127)
                res.push_back('B');
            if (c <= 127)
                res.push_back('C');
            if (d <= 127)
                res.push_back('D');
            if (e <= 127)
                res.push_back('E');

            if (res.size() == 1)
                cout << res.back() << endl;
            else
                cout << '*' << endl;
            res.clear();
        }
    }
}
