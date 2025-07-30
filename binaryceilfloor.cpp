#include<bits/stdc++.h>
using namespace std;
int floornum(vector<int> &nums,int n,int x){
    int ans=-1;
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        
        if(nums[mid]<=x){
            ans=nums[mid];
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}
int ceilnum(vector<int> &nums,int n,int x){
     int ans=-1;
    int low=0,high=n-1,mid;
       while(low<=high){
        mid=(low+high)/2;
        
        if(nums[mid]>=x){
            ans=nums[mid];
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,j;
    vector<int> nums;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter sorted array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"Enter an element: ";
    cin>>j;
    int fl=floornum(nums,n,j);
    int cl=ceilnum(nums,n,j);
    cout<<"Floor is "<<fl<<" and Ceiling is "<<cl<<endl;
    return 0;
}