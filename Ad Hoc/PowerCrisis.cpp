#include <iostream>
using namespace std;

int main()
{

    int n;
    while (cin >> n && n != 0)
    {
        bool state[n + 1];
        int m = 1;
        while (m)
        {
            //Initializing
            int p = 1, it = 1, cnt = 0, len = 0;
            for (int j = 1; j <= n; j++)
            {
                state[j] = true;
            }
            state[1] = false;
            while (len < n - 1)
            {
                //Find index to delete.
                do
                {
                    if (state[it] == true)
                    {
                        p = it;
                        cnt++;
                    }
                    if (it == n)
                    {
                        it = 1;
                    }
                    else
                    {
                        it++;
                    }
                    if (cnt == m)
                    {
                        cnt = 0;
                        break;
                    }

                } while (1);
                state[p] = false;
                len++;
            }
            if (p == 13)
            {
                cout << m << endl;
                break;
            }
            m++;
        }
    }
}