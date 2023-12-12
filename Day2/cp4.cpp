#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int min=101;
  int max=0;
  int num;
  int maxindex=-1;
  int minindex=-1;
  for(int i=1;i<=n;i++){
    cin>>num;
    if(num>max){
      max=num;
      maxindex=i;
    }
    if(num<=min){
      min=num;
      minindex=i;
    }
  }
  // cout<<maxindex<<" "<<minindex<<endl;
  int ans=(maxindex-1+n-minindex);
  if(maxindex>minindex){
    cout<<ans-1;    
  }else cout<<ans;
}