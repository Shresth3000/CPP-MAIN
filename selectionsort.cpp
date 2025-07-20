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
        int min=v[i],minIndex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<min){
                min=v[j];
                minIndex=j;
            }
        }
        if(v[minIndex]!=v[i]){
            int temp=v[i];
            v[i]=v[minIndex];
            v[minIndex]=temp;
        }
    }
     for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
    return 0;
}