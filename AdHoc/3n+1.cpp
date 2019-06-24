// UVA 100 - The 3n + 1 problem

#include <iostream>
using namespace std;
int main()
{
  int a, b, temp_a, temp_b, max_cycle = 0;
  while (cin >> a >> b)
  {
    temp_a = a;
    temp_b = b;
    if (a > b)
      swap(a, b);
    while (a < b)
    {
      unsigned int n = a;
      int cycle = 1;
      while (n != 1)
      {
        if (n % 2 == 1)
        {
          n = 3 * n + 1;
        }
        else
        {
          n = n / 2;
        }
        cycle++;
      }
      if (max_cycle < cycle)
        max_cycle = cycle;
      a++;
    }
    cout << temp_a << " " << temp_b << " " << max_cycle << endl;
  }
}