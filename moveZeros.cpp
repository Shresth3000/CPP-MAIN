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
    int j = 0; 
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            swap(v[i], v[j]);
            j++;
        }
    }
     for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
  
    return 0;
}