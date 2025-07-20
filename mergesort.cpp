#include<bits/stdc++.h>
using namespace std;
 void merge(vector<int> &v,int low,int high,int mid){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(v[left]<v[right]){
            temp.push_back(v[left]);
            left++;
        }else{
            temp.push_back(v[right]);
            right++;
        }
    }
     while(left<=mid){
        temp.push_back(v[left]);
            left++;
     }
      while(right<=high){
        temp.push_back(v[right]);
            right++;
      }
      for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
      }
 }
void Merge_sort(vector<int> &v,int low,int high){
    if(low>=high) return;
    int mid= (low+high)/2;
    Merge_sort(v,low,mid);
    Merge_sort(v,mid+1,high);
    merge(v,low,high,mid);

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
   Merge_sort(v,0,n-1);
     for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
    return 0;
}