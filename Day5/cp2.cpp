#include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    vector<int>arr(3);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;

    sort(arr.begin(),arr.end());

    int diff1=arr[2]-arr[0];
    int diff2=arr[2]-arr[1];
    n=n-diff1-diff2;
    if( n>=0 && n%3==0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    } 
  }
}
// 1 1 1 1
// 1 1 1 2
// 1 1 1 3
// 1 1 1 4
// 1 1 1 5
// 1 1 1 6
// 1 1 1 7
// 1 1 1 8
// 1 1 1 9
// 1 1 1 10
// 1 1 2 1
// 1 1 2 2
// 1 1 2 3
// 1 1 2 4
// 1 1 2 5
// 1 1 2 6
// 1 1 2 7
// 1 1 2 8
// 1 1 2 9
// 1 1 2 10
// 1 1 3 1
// 1 1 3 2
// 1 1 3 3
// 1 1 3 4
// 1 1 3 5
// 1 1 3 6
// 1 1 3 7
// 1 1 3 8
// 1 1 3 9
// 1 1 3 10
// 1 1 4 1
// 1 1 4 2
// 1 1 4 3
// 1 1 4 4
// 1 1 4 5
// 1 1 4 6
// 1 1 4 7
// 1 1 4 8
// 1 1 4 9
// 1 1 4 10
// 1 1 5 1
// 1 1 5 2
// 1 1 5 3
// 1 1 5 4
// 1 1 5 5
// 1 1 5 6
// 1 1 5 7
// 1 1 5 8
// 1 1 5 9
// 1 1 5 10
// 1 1 6 1
// 1 1 6 2
// 1 1 6 3
// 1 1 6 4
// 1 1 6 5