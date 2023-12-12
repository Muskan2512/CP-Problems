#include<iostream>
#include<vector>
using namespace std;

int main(){
  int m,n;
  cin>>m;
  cin>>n;
  // m -> rows
  // n -> columns
  vector<vector<int>>v(m,vector<int>(n,0));
  bool flag=false;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      // int num;
      cin>>(v[i][j]);
      if(v[i][j]==1)flag=true;
    }
  }
  int row[m];
  int col[n];
  int ans;
  for(int i=0;i<m;i++){
    ans=1;
    for(int j=0;j<n;j++){
      ans=(ans & v[i][j]);
    }
    row[i]=ans;
  }
  int ans1;
  for(int j=0;j<n;j++){
    ans1=1;
    for(int i=0;i<m;i++){
      ans1=(ans1 & v[i][j]);
      //resetting the same array for further returning the ans.
      v[i][j]=0;
    }
    col[j]=ans1;
  }

  // for(int i=0;i<m;i++)cout<<row[i]<<" ";
  // for(int j=0;j<n;j++)cout<<col[j]<<" ";

  int match=false;
  for(int i=0;i<m;i++){
    if(row[i]==0){continue;}
    else if(row[i]==1){
      for(int j=0;j<n;j++){
        if(col[j]==1){
          v[i][j]=1;
          match=true;
        }
      }
    }
  }

  // if(n==1 && m==1 && v[0][0]==0){
  //   //single element in the array
  //   cout<<"NO";
  // }

  // else 
  if(flag==true && !match){
    //flag true hai but match false hai matlab you have atleast one 1 but you don't have any 1 in the final ans;
    cout<<"NO";
  }
  else {
    cout<<"YES"<<endl;
  for(auto i:v){
    for(auto j:i){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  }
}
// 3 3
// 1 0 1
// 0 0 1
// 1 1 1