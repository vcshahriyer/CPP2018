#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int cnt = 0;
    for (int p = 2; p <= n; p++)
        if (prime[p])
        {
            cnt++;
            cout << p << ",";
        }
    cout << "\n"
         << "total : " << cnt;
}

int main()
{
    SieveOfEratosthenes(70000);
}
