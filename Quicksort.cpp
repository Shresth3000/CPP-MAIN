#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int part_Index(vector<int>&v,int low,int high){
    int i=low ,j=high;
    while(i<j){
        while(v[i]<=v[low]&& i<=high-1){
            i++;
        }
        while(v[j]>v[low]&& j>=low+1){
            j--;
        }
        if(i<j){
            swap(v[i],v[j]);
        }
    }
     swap(v[low],v[j]);
     return j;
}
void Quick_sort(vector<int>&v,int low,int high){
if(low<high){
    int pIndex=part_Index(v,low,high);
    Quick_sort(v,low,pIndex-1);    
    Quick_sort(v,pIndex+1,high);    
}else return;
}
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
Quick_sort(v,0,n-1);
     for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
    return 0;
}