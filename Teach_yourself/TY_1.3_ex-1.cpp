/*
 * Write a program that inputs the number of hours that an
 * employee works and the employee's wage. Then display the
 * employee's gross pay.(Be sure to prompt for input.)
 */
#include <iostream>
using namespace std;

int main(){

    int hour,wage;


    cout<<"Enter Work hour and wage to generate Gross pay:";
    cin>>hour>>wage;

    float gross_pay = ((float)wage/8760) * (float)(hour);
    cout<<"Gross pay is :"<<gross_pay<<"$"<<endl;

}