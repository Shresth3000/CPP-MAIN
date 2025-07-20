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
    int i=0,j=0;
    while(i<n && j<n){
        s+=v[j];
        if(s==k){
            len=max(len,j-i+1);
        }
        while(s>k){
            s-=v[i];
            i++; 
        }
        j++;
    }
    cout<<len;
   

    return 0;
}