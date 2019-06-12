#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, l, k, x;
    while (cin >> n >> m && n != 0 && m != 0)
    {
        cin >> l >> k;
        vector<int> arr;
        int max = 0, area = 0, cnt = 0, carea, ch;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            x *= 100;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());
        n = n * 100;
        m = m * 100;
        vector<int>::iterator height;
        vector<int>::iterator it;
        if (m % l != 0 && n % l != 0)
        {
            cout << "impossivel" << endl;
            return 0;
        }
        if ((m / l) < (n / l))
        {
            carea = m;
            ch = n;
        }
        else
        {
            carea = n;
            ch = m;
        }

        for (int i = 0; i < 2; i++)
        {
            // Here max height is n width is m
            vector<int> temp = arr;
            height = temp.end() - 1;
            while (area < carea && (height != temp.begin()))
            {
                if (*height == ch)
                {
                    area += l;
                    cnt++;
                }
                else if (*height < ch)
                {
                    it = find(temp.begin(), temp.end(), (ch - *height));
                    int indx = distance(temp.begin(), it);
                    if (it != temp.end())
                    {
                        area += l;
                        cnt += 2;
                        temp.erase(temp.begin() + indx);
                        height--;
                    }
                }
                temp.erase(height);
                height--;
            }
            if (area == carea)
            {
                max = cnt;
                break;
            }
            cnt = 0;
            area = 0;
            if (carea == m)
            {
                carea = n;
                ch = m;
            }
            else
            {
                carea = m;
                ch = n;
            }
        }

        if (max == 0)
        {
            cout << "impossivel" << endl;
        }
        else
        {
            cout << max << endl;
        }
    }
}