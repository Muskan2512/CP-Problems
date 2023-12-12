#include<iostream>
#include<bits/stdc++.h>
// #include<vector>
using namespace std;
int main(){
  int x1,x2,x3;
  cin>>x1;
  cin>>x2;
  cin>>x3;

  vector<int>ans;
  ans.push_back(x1);
  ans.push_back(x2);
  ans.push_back(x3);

  sort(ans.begin(),ans.end());
  cout<<((ans[2]-ans[1])+(ans[1]-ans[0]));
}