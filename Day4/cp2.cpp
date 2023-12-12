#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    // if(n<=2)cout<<1<<endl;
    // else if(n>=3 && n<x+3)cout<<2<<endl;
    // else{
      int count=2;int i=0;
    while(count<n){
      i++;
      count+=x;
    }
    cout<<i+1<<endl;
    // }
  }
}