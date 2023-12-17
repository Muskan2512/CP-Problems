#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int absValue=abs(a-b);
    cout<<(int)ceil(absValue/10.0)<<endl;


  }
}