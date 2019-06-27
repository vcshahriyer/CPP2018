// URI Online Judge | 1168 LED
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string v;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> v;
    int result = 0;
    for (int j = 0; j < v.size(); j++)
    {
      int tmp = v[j] - '0';
      switch (tmp)
      {
      case 0:
        result = result + 6;
        break;
      case 1:
        result = result + 2;
        break;
      case 2:
        result = result + 5;
        break;
      case 3:
        result = result + 5;
        break;
      case 4:
        result = result + 4;
        break;
      case 5:
        result = result + 5;
        break;
      case 6:
        result = result + 6;
        break;
      case 7:
        result = result + 3;
        break;
      case 8:
        result = result + 7;
        break;
      case 9:
        result = result + 6;
        break;

      default:
        return 0;
        break;
      }
    }

    cout << result << " leds" << endl;
  }
}