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
    for(int i=1;i<n;i++){
       int j=i;
       while(j>0&& v[j]<v[j-1]){
        int temp=v[j-1];
            v[j-1]=v[j];
            v[j]=temp;
            j--;
       }
    }
     for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
    return 0;
}