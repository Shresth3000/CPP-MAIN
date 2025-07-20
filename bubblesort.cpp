#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
            int temp=v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
            }
        }
    }
     for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
    return 0;
}