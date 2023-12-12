#include<iostream>
using namespace std;

int main(){
  long long n;
  cin>>n;
  long long sum=0;
  long long i=1;
  while(n!=0 && n!=9){
    int val=n%10;
    // cout<<val<<" ";
    if(val>=5) val=9-val;
    sum=sum+val*i;
    n/=10;
    i*=10;
    
  }
  //edge case
    if(n==9){
      sum=sum+n*i;
      cout<<sum;
    }
    else{
      cout<<sum;
    }
  
}