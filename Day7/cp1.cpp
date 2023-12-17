#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==1)cout<<1<<endl;
    else if(n==2)cout<<1<<endl;
    // else if(n==3)cout<<2<<endl;
    else {
      cout<<(int)ceil(n/2.0)<<endl;
    }
  }
}