#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter size of arr1: ";
    cin >> n;
    vector<int> v1, v2, ans;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
     cout << "Enter size of arr2: ";
    cin >> m;
     for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    int l,s;
    (n>m)?l=n,s=m:l=m,s=n;
    int j=0;
    for(int i=0;i<s;i++){
        if(v1[i]==v2[j]){
            ans.push_back(v1[i]);
            j++;
        }
    }
    for(int i=0;i<l;i++){
    cout<<ans[i]<<" ";
    }

    return 0;
}