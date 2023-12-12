#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>ans;
  for(int i=1;i<=n;i++){
    int num;
    cin>>num;
    ans.push_back(num);
  }
  int count=1;
  int maxcnt=1;
  for(int i=0;i<ans.size()-1;i++){
    if(ans[i]<ans[i+1]){
      count++;
      maxcnt=max(count,maxcnt);
    }else{
      count=1;
    }
  }
  cout<<maxcnt;
}