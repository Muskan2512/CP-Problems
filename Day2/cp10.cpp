#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a;
  cin>>b;
  int ans=1;
  while((3*a-2*b)<=0){
    a*=3;
    b*=2;
    ans++;
  }
  cout<<ans;
}