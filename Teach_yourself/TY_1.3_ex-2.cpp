/*
 *  Write a program that converts feet to inches.
 *  Prompt the user for feet and display the equivalent number of inches.
 *  Have your program repeat this process until the user enters 0 for the number of feet.
 */

#include <iostream>
using namespace std;


int main(){

    double feet=1, inch;


    cout<<"Enter feet to convert into inch :";
    while (feet!=0) {
        cin>>feet;
        inch = feet * 12.0;
        cout << feet << " feet is equal to " << inch << " inch" << endl;
    }

}