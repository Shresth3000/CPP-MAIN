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
    cout<<"Enter target: ";
    cin>>k;
     vector<int>v2=v;
     sort(v2.begin(),v2.end());
     int x=0,y=0,u=0,c=0,j=n-1,i=0,s=0;
     while(i<j){
        s=v2[i]+v2[j];
        if(s>k){
            j--;
        }
        else if(s<k){
            i++;
        }
        else{
            x=v2[i];
            y=v2[j];
            break;
        }
     }
     for(int l=0;l<n;l++){
        if(v[l]==x){
            u=l;
        }
         else if(v[l]==y){
            c=l;
            break;

        }
     }cout<<u<<" "<<c;
    return 0;
}
