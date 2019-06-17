// URI Online Judge | 1011 Sphere
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double n, result;
    cin >> n;
    result = (4 / 3.0) * 3.14159 * pow(n, 3);
    cout << "VOLUME = " << fixed << setprecision(3) << result << endl;
}
