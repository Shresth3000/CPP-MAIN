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

void Selection_sort(vector<int> &v,int n){
    cout<<"Selection sort"<<endl;
    for(int i=0;i<n-1;i++){
        int min=v[i],minIndex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<min){
                min=v[j];
                minIndex=j;
            }
        }
        if(v[minIndex]!=v[i]){
           swap(v[i],v[minIndex]);
        }
    }
}
void Bubble_sort(vector<int> &v,int n){
    cout<<"Bubble sort"<<endl;
for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
            }
        }
    }
}
void Insertion_sort(vector<int>&v,int n){
    cout<<"Insertion sort"<<endl;
        for(int i=1;i<n;i++){
       int j=i;
       while(j>0&& v[j]<v[j-1]){
       swap(v[j],v[j-1]);
            j--;
       }
    }
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
  cout<<"Which sort? "<<endl<<"1. Selection Sort"<<endl<<"2. Bubble Sort"<<endl<<"3. Insertion Sort"<<endl<<"4. Merge Sort"<<endl<<"5. Quick Sort"<<endl;
  int ch;
  cin>>ch;
  if(ch==1) Selection_sort(v,n);
  else if(ch==2) Bubble_sort(v,n);
  else if(ch==3) Insertion_sort(v,n);
  else if(ch==4) Merge_sort(v,0,n-1);
  else if(ch==5) Quick_sort(v,0,n-1);
  else {cout<<"Invalid choice";
return 1;
}

     for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
    return 0;
}