#include<iostream>
using namespace std;
int main()
{
    int i,a,n,b;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a;
        if (a>=10)
        {
            cout<<(a-10)<<" "<<(a-(a-10))<<endl;
        }
        else
            cout<<"0"<<" "<<a<<endl;
    }
}