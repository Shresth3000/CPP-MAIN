#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"No. of steps to rotate? :";
    cin>>k;
    k%=n;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
 for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
  
    return 0;
}