#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int ans1,ans2,ans3;
    int max1=max(2*a,b);
    ans1=max1*max1;
    int max2=max(a,2*b);
    ans2=max2*max2;
    int max3=max((a+b),max(a,b));
    ans3=max3*max3;
    cout<<min(ans1,min(ans2,ans3))<<endl;
  }
}