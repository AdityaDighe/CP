#include<iostream>
#include<math.h>
using namespace std;
bool canFill(int n, int ai[], int bi[])
{
    int total_water_remaining=0, total_capacity_2=0, i, j, max, temp;
    for(i=0; i<n; i++)
    {
        total_water_remaining+=ai[i];
    }
    for(i=0; i<2; i++)
    {
        max=i;
        for(j=i; j<n; j++)
        {
            if(bi[j]>bi[max])
            {
                max=j;
            }
        }
        temp=bi[i];
        bi[i]=bi[max];
        bi[max]=temp;
    }
    total_capacity_2=bi[0]+bi[1];
    if(total_capacity_2>=total_water_remaining)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, i;
    cin>>n;
    int ai[n],bi[n];
    for(i=0;i<n;i++)
    {
        cin>>ai[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>bi[i];
    }
    if(canFill(n,ai,bi))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
