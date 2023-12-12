#include<iostream>
using namespace std;
int main(){
  int k,n,w;
  cin>>k;
  cin>>n;cin>>w;

  int totalCostOfWBananas=(w*(w+1)*k)/2;
  if(totalCostOfWBananas<n)cout<<0;
  else
  cout<<totalCostOfWBananas-n;
}