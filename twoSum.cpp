#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter target: ";
    cin>>k;
    int s=0,c=0;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        s=k-v[i];
       if(mpp.find(s)!=mpp.end()){
        c=1;
        cout<<i<<" "<<mpp[s];
        break;
       }
       mpp[v[i]]=i; 
    }
    if(c==0){
        cout<<"No Pair";
    }
    return 0;
}
