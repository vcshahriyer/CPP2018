// URI Online Judge | 1010 Simple Calculate
#include <iostream>
#include <iomanip>
using namespace std;

main()
{
    int a1, b1, a2, b2;
    float c1, c2, result;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    result = (b1 * c1) + (b2 * c2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << result << endl;
}