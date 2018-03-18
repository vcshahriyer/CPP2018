#include <iostream>
using namespace std;
int main()
{
    int test, i;
    int m , n, mn, ans, x;
    cin>>test;
    for(i=1; i<=test; i++)
    {
        cin>>m>>n;
        mn = m * n;
        if(m==1 || n==1)    ans = mn;
        else if(m==2 || n==2)
        {
            if(m==2) x = n;
            else     x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
        else if(mn%2 == 0) ans = mn/2;
        else ans = (mn/2)+1;
        cout<<"Case "<<i<<" : "<<ans<<endl;
    }
    return 0;
}