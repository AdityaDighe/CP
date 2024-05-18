#include<stdio.h>
#include<conio.h>
int binary_search(int a[],int n,int x)
{
    int l=0,h=n-1,m;
    while(l<=h)
    {
        m=(l+h)/2;
        if (a[m]==x)
        {
            return m;
            break;
        }
        else if (a[m]<x)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    return -1;
}
void main()
{
    int i, a[100], x, n, t;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("Enter the searching element\n");
    scanf("%d",&x);
    t=binary_search(a,n,x);
    if(t==-1)
    {
        printf("Not present\n");
    }
    else
    {
        printf("Found at index %d",t);
    }
    getch();
}