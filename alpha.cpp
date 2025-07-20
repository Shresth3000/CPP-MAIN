#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s = "aabasbcdf";
    n=s.length();
    map<char,int>mpp;
    for(int i=0;i<n;i++){
        mpp[s[i]]++;
    }
     for(auto it: mpp){
       cout<<it.first<<" --> "<<it.second<<endl;
    }

    return 0;
}