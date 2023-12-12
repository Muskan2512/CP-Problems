#include<iostream>
using namespace std;
int main(){
  long long int n;
  cin>>n;
  int luckyDigit=0;
  int digit=0;
  while(n!=0){
    int rem=n%10;
    if(rem==4||rem==7)luckyDigit++;
    digit++;
    n/=10;    
  }
  if(luckyDigit==4 ||luckyDigit==7)cout<<"YES";
  else cout<<"NO";
}