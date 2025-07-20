#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int j=n-1;
    vector<int> res;
    int maxm=INT_MIN;
    while(j>=0){
        if(v[j]>maxm){
            res.push_back(v[j]);
        }
        maxm=max(maxm,v[j]);
        j--;
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}