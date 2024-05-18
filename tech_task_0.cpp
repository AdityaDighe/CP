#include<iostream>
#include<math.h>
using namespace std;
bool isSquare(int n)
{
    int sqr;
    sqr=sqrt(n);
    if (n>=0)
    {
        return (sqr*sqr==n);
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    if(isSquare(n))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
