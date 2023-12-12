#include<iostream>
using namespace std;

int main(){
  string s;
  cin>>s;
  int n=s.size();
  for(int i=0;i<n-1;i+=2){
    for(int j=i+2;j<n;j+=2){
      if(s[i]>s[j]){
        char temp;
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
      }
    }
  }
  cout<<s;
}