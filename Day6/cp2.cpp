#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    int rem=(n%x);
    if(y==0){
      cout<<n-rem<<endl;
    }
    else if(rem==y){
      cout<<n<<endl;
    }
    else if(y<rem){
      int ans=n-rem+y;
      cout<<ans<<endl;
    }
    else{
    int ans=n-rem-(x-y);
    cout<<ans<<endl;
    }
  }
}