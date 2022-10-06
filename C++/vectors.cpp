
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"How many numbers do you want to enter: ";
    cin>>num;

    vector<int> v;
    for(int i = 0; i < num; i++){
        int val;
        cin>>val;
        v.push_back(val);
    }
    cout<<"\n";
    for(auto x: v){
        cout<<x<<" ";
    }
    return 0;
}
