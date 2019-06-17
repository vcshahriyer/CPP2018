// Reverse string with iterator pointers.
#include <iostream>
#include <string>
using namespace std;

string revstr(string s)
{

    string rs;
    return rs.assign(s.rbegin(), s.rend());
}
int main()
{
    string name = "Raghib Shahriyer";
    cout << revstr(name);
}
