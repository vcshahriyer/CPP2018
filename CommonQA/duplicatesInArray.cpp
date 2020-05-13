#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,2,4};
    vector<int> dupli;
    for(int i= 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
        for(int j= i+1; j <sizeof(arr)/sizeof(arr[0]); j++){
            if(arr[i] == arr[j]){
                dupli.push_back(arr[i]);
            }
        }
    }
    
    for(auto x: dupli){
        cout<<x<<" ";
    }
}