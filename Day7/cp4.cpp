#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
  int x1,x2,x3,x4;
  cin>>x1>>x2>>x3>>x4;
  int maxi=max(x1,max(x2,max(x3,x4)));
  vector<int>arr;
  vector<int>ans;
  if(x1!=maxi)arr.push_back(x1);
  if(x2!=maxi)arr.push_back(x2);
  if(x3!=maxi)arr.push_back(x3);
  if(x4!=maxi)arr.push_back(x4);
  for(auto i:arr){
    ans.push_back(maxi-i);

  }
  // int a=maxi-(x1);
  // int b=maxi-x2;
  // int c=maxi-x3;
  // cout<<a<<b<<c;
  for(auto i:ans){
    cout<<i<<" ";
  }
}