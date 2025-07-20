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
    int low=0,mid=0,high=n-1;
    while(mid!=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        
        else if(v[mid]==1){
            mid++;
        }
         else{
            swap(v[high],v[mid]);
            high--;
        }

    }
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}