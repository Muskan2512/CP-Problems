#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int sum=0;
      int evencount=0;
      int oddcount=0;
    for(int i=0;i<n;i++){
      int num;
      cin>>num;
      sum+=num;
      // to check if all the nums are even or odd 
      if((num & 1) ==0){
        // even
        evencount++;
      }
      else{
        // odd
        oddcount++;
      }

    }
    // cout<<"oddcount:"<<oddcount<<endl;
    // cout<<"evencount:"<<evencount<<endl;
    if((sum & 1) !=0){
      //odd sum mil gaya
      cout<<"YES"<<endl;
    }
    else if(evencount==n || oddcount==n){
        cout<<"NO"<<endl;
      }
    else if(oddcount!=0 && oddcount%2==0){
      cout<<"YES"<<endl;
    }
    }

  
}


// 7
// 1052 445 683 995 722 1012 1263
// 8
// 1852 1260 1405 77 1636 531 909 115
// 5
// 1974 24 1316 256 13
// 7
// 1996 477 757 1041 1450 1332 1314
// 7
// 264 1070 15 1174 1110 1339 1594
// 2
// 772 426
// 7
// 657 1889 898 516 815 428 1352
// 7
// 1972 74 1009 1887 169 119 462
// 8
// 732 1397 1787 153 636 1148 732 390
// 5
// 1655 946 1521 489 111
// 8
// 977 1674 634 823 424 1599 1714 1715
// 8
// 1246 1306 1901 1965 464 733 1350 944
// 7
// 888 199 275 1653 1604 650 1498
// 7
// 1429 620 586 1851 884 837 1316
// 7
// 379 76 1652 1344 1974 1959 1248