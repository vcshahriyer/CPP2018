#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Every one love my country";
    int stop = 0;
    string tem = "";
    for(int i =0; i<str.size()-1;i++){
        if(string(1, str[i])==" "){
            for(int j=i-1;j>=stop;j--){
                tem+=str[j];
            }
            stop = i+1;
            tem+=" ";
        }
    }
    for(int j =str.size()-1;j>=stop;j--){
            tem+=str[j];
        }
    cout<<tem;
}
