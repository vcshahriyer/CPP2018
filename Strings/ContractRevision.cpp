// URI Online Judge | 1120 Contract Revision
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  char c;
  while (cin >> c >> s && c != '0' && s != "0")
  {
    /* Removing character c from s */
    s.erase(remove(s.begin(), s.end(), c), s.end());
    //   remove(s.begin(), s.end(), c);

    while (s[0] == '0' && s.size() > 1)
    {
      s.erase(0, 1);
    }
    if (s.size() < 1)
    {
      s = '0';
    }

    cout << s << endl;
  }
}