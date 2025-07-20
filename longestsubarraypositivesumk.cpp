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
    cout<<"Enter target sum: ";
    cin>>k;
    int len=0,s=0;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        s+=v[i];
        if(mpp.find(s-k)!=mpp.end()){
            len=max(len,(i-mpp[s-k]));
        }
        if(mpp.find(s-k)==mpp.end()){
                    mpp[s]=i;
        }
    }cout<<len;

    return 0;
}