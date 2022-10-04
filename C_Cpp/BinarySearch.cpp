// We are given an array and a key, We have to find whether the key is present or not.
#include<bits/stdc++.h>
using namespace std;
      
int main() {

 vector<int> ver={1,2,3,5,6};
  int to_find=5;
  int low=0,high=4;
  while(high-low>1){
    int mid=high-(high-low)/2;
    if(ver[mid]<to_find){
      low=mid+1;
    }
    else high=mid;
  }
   if(low==to_find) {
    cout<<"Yes\n";
   }
   else if(high==to_find){
    cout<<"Yes\n";
   }
   else cout<<"NO\n";
}
