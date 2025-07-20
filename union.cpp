#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter size of first array : ";
    cin>>n;
    vector<int>v,v2,ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter size of Second array : ";
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    set <int> s;
    for(auto num : v){
        s.insert(num);
    }
    for(auto num : v2){
        s.insert(num);
    }
    
    for(auto it : s){
        ans.push_back(it);
    }
    
    for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
    }
    

    
return 0;
}