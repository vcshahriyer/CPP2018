/*
 *Here is a C program. Rewrite it so it uses C++ style I/O statements.
 */
 #include <iostream>
using namespace std;


int main(){

    int a,b,d,min;

    printf("Enter two numbers: ");
    cin>>a>>b;
    min = a>b? b:a;
    for (d=2;d<min;d++){
        if ( ( (a%d)==0 ) && ( (b%d)==0 ) ) break;
    }
    if (d==min){
        cout<<"No common denominators"<<endl;
        return 0;
    }
    cout<<"The lowest common denominator is "<<d<<endl;
    return 0;

}