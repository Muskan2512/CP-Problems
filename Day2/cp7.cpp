#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int ans=0;
  int minCapacity=0;
  for(int i=1;i<=n;i++){
    int exit,entry;
    cin>>exit;
    cin>>entry;
    ans=ans-exit+entry;
    minCapacity=max(minCapacity,ans);
  }
  cout<<minCapacity;

}