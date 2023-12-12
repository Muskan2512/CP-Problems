#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// #DONE

bool cmp(pair<int,int>v1,pair<int,int>v2){
  return (v1.first < v2.first);
}
int main(){
  int n,k;
  cin>>n;
  cin>>k;
  vector<pair<int,int>>v;
  for(int i=1;i<=n;i++){
    int num;
    cin>>num;
    v.push_back({num,i});
  }
  sort(v.begin(),v.end(),cmp);
  int i=0;int count=0;
  while(k>0 && i<n){
    if(v[i].first>k)break;
    if(v[i].first<=k){
      count++;
      k=k-v[i].first;
    }
    i++;
  }
  cout<<count<<endl;
  for(int val=0;val<i;val++){
    cout<<v[val].second<<" ";
  }


}