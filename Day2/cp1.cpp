#include<iostream>
#include<vector>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int i=1;
    int count=0;
    vector<int>v;
    while(n>0){
      int rem=n%10;
      if(rem!=0){
      v.push_back(rem*i);
      count++;
      }
      i*=10;
      n/=10;
    }
    cout<<count<<endl;
    for(auto i:v){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}

