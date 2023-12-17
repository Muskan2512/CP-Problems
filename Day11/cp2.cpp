#include<iostream>
#include<vector>
using namespace std;

// definitely tle marega
// int Count(int x){
//   if(x==1||x==2||x==3||x==4||x==5){
//     return 1;
//   }
  
//   int onestep=1+Count(x-1);
//   int twostep=1+Count(x-2);
//   int threestep=1+Count(x-3);
//   int fourstep=1+Count(x-4);
//   int fivestep=1+Count(x-5);

//   return min(onestep,min(twostep,min(threestep,min(fourstep,fivestep))));
// }

int main(){
  int x;
  cin>>x;
  int n=x;
  int count=0;
  while(n>0){
    if(n>=5){
      count=n/5;
      n=n%5;
    }
    else if(n>=4){count++;n=n%4;}
    else if(n>=3){count++;n=n%3;}
    else if(n>=2){count++;n=n%2;}
    else if(n>=1){count++;n--;}
  }
  cout<<count<<" ";
}