#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,k;
  cin>>n>>m>>k;
  long long ans=0;
  // long long maxi=0,secondMaxi=0;

  vector<long long >v;
  for(int i=0;i<n;i++){
    long long num;
    cin>>num;
    // if(num>maxi){
    //   secondMaxi=maxi;
    //   maxi=num;
    // }
    // else if(num<=maxi && num>secondMaxi){
    //   secondMaxi=num;
    // }
    v.push_back(num);
   
  }
  sort(v.begin(),v.end());
  // cout<<v[n-1]<<endl;
  // cout<<v[n-2]<<endl;
  // cout<<maxi<<" "<<secondMaxi<<endl;
  // ans+=(m/(k+1))*(maxi*k+secondMaxi);
  // cout<<v[n-2]*k + v[n-1];
  if(m%(k+1) ==0){
  ans+=(m/(k+1))*(v[n-1]*k + v[n-2]);
  cout<<ans<<" ";
  }
  else{
    long long rem=m%(k+1);
    ans+=(m/(k+1))*(v[n-1]*k + v[n-2])+rem*v[n-1];
    cout<<ans<<" ";
  }
}
// 993827160500000000 
// 993827160500000000 
// 1000000000
// 1000000000