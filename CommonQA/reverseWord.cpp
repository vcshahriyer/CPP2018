#include<bits/stdc++.h>
using namespace std;

vector<string> word(string str){
    vector<string> wordarr;
    string temp;
    for(auto x : str ){
        if(x == ' '){
            wordarr.push_back(temp);
            temp = "";

        }else
        {
            temp += x;
        }
    }
    wordarr.push_back(temp);
    return wordarr;
}

int main(){
  string str = "cats and dogs";
  vector<string> arrword = word(str);
  for (auto x = arrword.rbegin(); x != arrword.rend(); x++ )
  {
      cout<<*x<<" ";
  }
  
}