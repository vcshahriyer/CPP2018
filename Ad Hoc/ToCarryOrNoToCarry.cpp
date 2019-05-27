// URI Online Judge | 1026

#include <iostream>
using namespace std;
int main()
{
    unsigned int a, b;
    while (cin >> a >> b)
    {
        unsigned int c = a ^ b;
        cout << c << endl;
    }
}