//URI Online Judge | 1030  Flavious Josephus Legend

#include <iostream>
using namespace std;

int main()
{

    int nc;
    cin >> nc;
    for (int i = 0; i < nc; i++)
    {
        int n, k, p = 1, it = 0, cnt = 0, len = 0;
        cin >> n >> k;
        bool state[n + 2];
        //Initializing
        for (int i = 1; i <= n; i++)
        {
            state[i] = true;
        }
        while (len < n - 1)
        {
            //Find index to delete.
            do
            {
                if (it == n)
                {
                    it = 1;
                }
                else
                {
                    it++;
                }
                if (state[it] == true)
                {
                    p = it;
                    cnt++;
                }
                if (cnt == k)
                {
                    cnt = 0;
                    break;
                }

            } while (1);
            state[p] = false;
            len++;
        }
        // cout << p << endl;
        for (int j = 1; j <= n; j++)
        {
            if (state[j] == true)
            {
                cout << "Case " << i + 1 << ": " << j << endl;
            }
        }
    }
}