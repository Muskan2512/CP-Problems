#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int num;
    cin>>num;
    v.push_back(num);
  }
  sort(v.begin(),v.end());
  if(v[n-1]>=(v[n-2]+v[n-3])){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
    int temp=v[n-1];
    v[n-1]=v[n-2];
    v[n-2]=temp;
    for(auto i:v){
      cout<<i<<" ";
    }
  }
}