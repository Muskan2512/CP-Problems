#include<iostream>
using namespace std;

int main(){
  int arr[5][5];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>arr[i][j];
    }
  }
  
  bool flag=false;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(arr[i][j]==1){
        flag=true;
        int ans=abs(2-i)+abs(2-j);
        cout<<ans;
        break;
      }
    }
    if(flag==true)break;
  }
}