#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if((n&1)==0){
      // even
      cout<<n/2 - 1<<endl;
    }
    else {
      cout<<n/2<<endl;
    }
  }
}