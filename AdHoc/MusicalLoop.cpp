#include <iostream>
using namespace std;
int main()
{
    int n;
    while (scanf("%d", &n) && n)
    {
        int arr[n + 1], peek = 0, state;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (arr[n - 1] < arr[0])
            state = 1;
        else
            state = 0;
        arr[n] = arr[0];
        for (int i = 1; i <= n; i++)
        {
            if (arr[i - 1] < arr[i] && state == 0)
            {
                peek++;
                state = 1;
            }
            else if (arr[i - 1] > arr[i] && state == 1)
            {
                peek++;
                state = 0;
            }
        }
        cout << peek << endl;
    }
}