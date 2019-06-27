// Add two integer without using '+' operator.
#include <iostream>
using namespace std;

int doadd(int a, int b)
{
    while (b != 0)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
int main()
{
    cout << doadd(10, 5) << endl;
}
