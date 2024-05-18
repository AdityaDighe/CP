#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int n,i,j,m=INT_FAST32_MAX;
    cin>>n;
    int a[n];
    vector <int> ans(2,-1);
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && m>(j-i))
            {
                ans.pop_back();
                ans.pop_back();
                ans.push_back(i);
                ans.push_back(j);
                m=(j-i);
            }
        }
    }
    if(m==0)
    {
        cout<<"Weak array";
    }
    else
    {
        cout<<ans[0]+n-ans[1];
    }
    return 0;
}