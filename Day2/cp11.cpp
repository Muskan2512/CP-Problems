#include<iostream>
#include<map>
using namespace std;

// int main(){
//   string s;
//   cin>>s;
//   int n=s.size();
//   int ans=0;
//   for(int i=0;i<n;i++){
//     int j;
//     for(j=i+1;j<n;j++){
//       if(s[i]==s[j])ans++;
//     }
//   }
//   int final=n-ans;
//   if((n-ans)%2==0){cout<<"CHAT WITH HER!";}
//   else{cout<<"IGNORE HIM!";}
// }


int main(){
  map<char,int>mp;
  string s;
  cin>>s;
  int n=s.size();
  for(int i=0;i<n;i++){
    mp[s[i]]++;
  }
  // cout<<mp.size();
  int size=mp.size() ;
  // cout<<size;
  if(!(size & 1)){
    cout<<"CHAT WITH HER!";
  }else{
    cout<<"IGNORE HIM!";
  }
}


