// URI Online Judge | 1086 The Club Ballroom
#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int ballroom(vector<int> planks, int area, int x, int width)
{
    vector<int>::iterator it;
    vector<int>::iterator itt;
    int cnt = 0;
    for (int i = x; i > 0; i -= 100)
    {
        if (area == 0)
            return cnt;
        it = find(planks.begin(), planks.end(), i);
        while (it != planks.end() && area != 0)
        {
            int indx = distance(planks.begin(), it);
            if (i == x)
            {
                cnt++;
                planks.erase(planks.begin() + indx);
                area = area - width;
            }
            else if (i < x)
            {
                planks.erase(planks.begin() + indx);
                itt = find(planks.begin(), planks.end(), (x - i));
                if (itt != planks.end())
                {
                    int indx = distance(planks.begin(), itt);
                    cnt += 2;
                    planks.erase(planks.begin() + indx);
                    area = area - width;
                }
            }
            it = find(planks.begin(), planks.end(), i);
        }
    }

    return INF;
}

int main()
{
    int n, m, l, k, x;
    while (cin >> n >> m && n != 0 && m != 0)
    {
        cin >> l >> k;
        vector<int> arr;
        int mn = INF;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            x *= 100;
            arr.push_back(x);
        }
        n = n * 100;
        m = m * 100;
        if (m % l == 0)
        {
            // Here height n
            mn = ballroom(arr, m, n, l);
        }
        if (n % l == 0)
        {
            //Here height m
            mn = min(mn, ballroom(arr, n, m, l));
        }

        if (mn >= INF || mn < 0)
            cout << "impossivel" << endl;
        else
            cout << mn << endl;
    }
    return 0;
}