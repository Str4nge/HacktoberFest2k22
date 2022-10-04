//* For better look open this in VS code with Better Comments extension. 

 //! Q1. 
//? Sort K sorted Array

#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[]={6,5,3,2,8,10,9};
  int k=4;
  priority_queue<int> pq;
  int j=0;
  for(int i=0;i<7;i++){
    pq.push(-1*a[i]);
    if(pq.size()==k){
      a[j]=-1*pq.top();
       pq.pop();
       j++;
    }
  }
  while(!pq.empty()){
    a[j]=-1*pq.top();
       pq.pop();
       j++;
  }
  for(int i=0;i<7;i++) cout<<a[i]<<" ";
}

//todo ---------------------

//! Q2.  
//? K Closest Numbers

#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[]={5,6,7,8,9};
  int k=3,x=7;
  priority_queue<pair<int,int>> pq;
  for(int i=0;i<5;i++){
    pq.push({abs(7-a[i]),a[i]});
    if(pq.size()==k+1) pq.pop();
  }
  while(!pq.empty()){
    cout<<pq.top().second<<" ";
    pq.pop();
  }
}

//todo --------------------

//! Q3  
//? Top K Frequent Number

#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[]={1,1,1,3,2,4,2};
  int k=2;
  unordered_map<int,int> mp;
  for(int i=0;i<7;i++){
    mp[a[i]]++;
  }
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  for(auto i:mp){
    pq.push({i.second,i.first});
    if(pq.size()>k) pq.pop();
  }
    while(!pq.empty()){
    cout<<pq.top().second<<" ";
    pq.pop();
  }
}

//todo -------------------------

//! Q4
//? 9 connected ropes to minimized the cost
//?  There are given n ropes of different lengths, we need to connect these ropes into one rope.
//? The cost to connect two ropes is equal to sum of their lengths.
//?  We need to connect the ropes with minimum cost.

/* For example if we are given 4 ropes of lengths 4, 3, 2 and 6. We can connect the ropes in following ways.
1) First connect ropes of lengths 2 and 3. Now we have three ropes of lengths 4, 6 and 5.
2) Now connect ropes of lengths 4 and 5. Now we have two ropes of lengths 6 and 9.
3) Finally connect the two ropes and all ropes have connected. 

Total cost for connecting all ropes is 5 + 9 + 15 = 29. This is the optimized cost for connecting ropes.
Other ways of connecting ropes would always have same or more cost.
For example, if we connect 4 and 6 first (we get three strings of 3, 2 and 10), then connect 10 and 3
(we get two strings of 13 and 2).Finally we connect 13 and 2.
Total cost in this way is 10 + 13 + 15 = 38. .*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[]={1,2,3,4,5};
  priority_queue<int,vector<int>,greater<int>> pq;
  for(int i=0;i<5;i++) pq.push(a[i]);
  int ans=0;
  while(pq.size()>1){
    int a=pq.top();
    pq.pop();
    int b=pq.top();
    pq.pop();
    pq.push(a+b);
    ans+=(a+b);
  }
  cout<<ans<<"\n";
}

//todo ----------------------------

//! Q5
//?  Median in a stream of integers
//? Given that integers are read from a data stream. Find median of elements read so for in an efficient way. 
/* For simplicity assume, there are no duplicates. For example, let us consider the stream 5, 15, 1, 3 ... 
After reading 1st element of stream - 5 -> median - 5
After reading 2nd element of stream - 5, 15 -> median - 10
After reading 3rd element of stream - 5, 15, 1 -> median - 5
After reading 4th element of stream - 5, 15, 1, 3 -> median - 4, so on */

#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[]={12,15,10,5,8,7,16};
  priority_queue<int> pq1,pq2;
  for(int i=0;i<7;i++){
    pq1.push(a[i]);
    if(pq1.size()>pq2.size()) {
      cout<<pq1.top()<<" ";
      pq2.push(-1*pq1.top());
      pq1.pop();
    }
    else {
      cout<<(float)(pq1.top()/2.0 + -1*pq2.top()/2.0)<<" ";
    }
  }
}

                            //* ----------------------------END----------------------------*//
