// URI Online Judge | 1024 Encryption
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> ws; // stream out any whitespace
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        string newstr;
        for (int j = 0; j < s.size(); j++)
        {
            int tmp = s[j];
            if ((tmp >= 65 && tmp <= 90) | (tmp >= 97 && tmp <= 122))
            {
                tmp += 3;
                newstr += (char)tmp;
            }
            else
            {
                newstr += (char)tmp;
            }
        }
        reverse(newstr.begin(), newstr.end());
        int mid = newstr.size() / 2;
        string result = newstr.substr(0, mid);
        for (int k = mid; k < newstr.size(); k++)
        {
            int tmp = newstr[k];

            tmp -= 1;
            result += (char)tmp;
        }
        cout << result << endl;
    }
}