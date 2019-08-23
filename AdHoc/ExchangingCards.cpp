// URI Online Judge | 1104 Exchanging Cards
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, card;
  set<int> alice;
  set<int> betty;
  while (cin >> a >> b && a != 0 && b != 0)
  {
    for (int i = 0; i < a; i++)
    {
      cin >> card;
      alice.insert(card);
    }
    for (int i = 0; i < b; i++)
    {
      cin >> card;
      betty.insert(card);
    }
    int mincnt = 0;

    if (alice.size() < betty.size())
    {
      for (auto it = alice.begin(); it != alice.end(); it++)
      {
        int tmp = *it;
        if (betty.find(tmp) != betty.end())
          continue;
        mincnt++;
      }
      cout << mincnt << endl;
    }
    else
    {
      for (auto it = betty.begin(); it != betty.end(); it++)
      {
        int tmp = *it;
        if (alice.find(tmp) != alice.end())
          continue;
        mincnt++;
      }
      cout << mincnt << endl;
    }
    alice.clear();
    betty.clear();
    }
}