#include<bits/stdc++.h>
#include<limits>
using namespace std;
int main(){
    int n;
    cout<<"Enter array Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int firstMax=arr[0];
    int secondMax=INT_MIN;
     for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }
    cout<<firstMax<<endl<<secondMax<<endl;
    return 0;
}