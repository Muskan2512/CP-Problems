#include<iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  int x=0;
  while(t--){
    string s;
    cin>>s;
    // int x=0;
    if(s[0]=='+')x++;
    else if(s[0]=='-')x--;
    else if(s[0]=='X'){
      if(s[2]=='+')x++;
      else x--;
    }

  }
  cout<<x<<endl;
}