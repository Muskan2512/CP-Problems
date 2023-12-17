#include<iostream>
using namespace std;
int main(){
  int m,n;
  cin>>m>>n;
  if(( m & 1)==0){
    //even number of rows
    cout<<((m/2)*n);
  }
  else{
    int ans1=(m-1)/2 * n;
    int ans2=n/2;
    cout<<ans1+ans2;
  }
}