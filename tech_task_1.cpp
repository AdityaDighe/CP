#include<iostream>
#include<math.h>
using namespace std;
bool canMakestr( string L, string M, string N)
{
    int count[128]={0}, i;
    for(i=0; i<L.length(); i++)
    {
        count[L[i]]++;
    }
    for(i=0; i<M.length(); i++)
    {
        count[M[i]]++;
    }
    for(i=0; i<N.length(); i++)
    {
        if(count[N[i]]==0)
        {
            return false;
        }
        else
        {
            count[N[i]]--;
        }
    }
    return true;
}
int main()
{
    string L,M,N;
    cin>>L>>M>>N;
    if (canMakestr(L,M,N))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
