#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,n;
    cin>>a;
    cin>>b;
    cin>>n;
    int count=1;
    while(a+b<=n){
      if(a<b)
      a+=b;
      else
      b+=a;

      count++;
    }
    cout<<count<<endl;
  }
} 