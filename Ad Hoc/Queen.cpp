#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2, o = 0, i = 1, t = 2;
    while (cin >> x1 >> y1 >> x2 >> y2 && x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)
    {
        if (x1 == x2 && y1 == y2)
            cout << o;
        else if (abs(x1 - x2) == 0 | abs(y1 - y2) == 0)
            cout << i;
        else if (abs(x1 - x2) == abs(y1 - y2))
            cout << i;
        else
            cout << t;
        cout << endl;
    }
}