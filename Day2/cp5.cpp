#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i;
  for(i=0;i<n;i++){
    int num;
    //here first of all,all inputs will be taken back to back and then if any one will be 1 then it will eventually print HARD.
    cin>>num;
    if(num==1){
      cout<<"HARD";
      break;
    }
  }
  if(i==n){
    cout<<"EASY";
  }

}