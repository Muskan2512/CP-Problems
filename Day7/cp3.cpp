#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int N=n/2;
    int evensum=0,oddsum=0;
    if((N & 1)!=0){
      //odd aa raha 
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
        evensum+=i;
      }
      for(int i=1;i<=n-3;i+=2){
        cout<<i<<" ";
        oddsum+=i;
      }
      oddsum+=(n-1);
      int left=evensum-oddsum;

      
      cout<<n-1+left<<endl;
    }
  }

}