#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter the row number: "<<endl;
    cin>>row;

    for (int i=row;i>=1;i--){

        for (int star=i;star<row;star++){
            cout<<"* ";
        }

        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }

        for(int j=1;j<i;j++){
            cout<<(i-j)<<" ";
        }
        for (int star=i;star<row;star++){
            cout<<"* ";
        }
        cout<<"\n";
    }

}