#include<iostream>
#include<vector>
using namespace std;


void solve(int i,int j,vector<vector<char>>arr,int n,int m,int &count){
  if(i==n-1 && j==m-1 && arr[i][j]=='C'){
    cout<<count<<endl;
    return;
  }
  if(j==m-1 && arr[i][j]=='R'){
    count++;
    // cout<<"Condition R mein"<<' ';
    solve(i+1,j,arr,n,m,count);
  }
  if(i==n-1 && arr[i][j]=='D'){
    // cout<<"Condition D mein"<<' ';
    count++;
    solve(i,j+1,arr,n,m,count);
  }
  

  if(arr[i][j]=='R'){
    // cout<<"R mein"<<" ";
    solve(i,j+1,arr,n,m,count);
  }
  if(arr[i][j]=='D'){
    // cout<<"D mein"<<" ";
    solve(i+1,j,arr,n,m,count);
  }

}
int main(){
  int n,m;
  cin>>n;cin>>m;
  // char arr[n][m];
  vector<vector<char>>arr(n,vector<char>(m));
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  solve(0,0,arr,n,m,count);
}