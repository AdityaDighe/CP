#include<stdio.h>
#include<conio.h>
int linear_search(int a[],int n, int x)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if(x==a[i])
        {
            return i;
            break;
        }
        else if(i>=n)
        {
            return -1;
            break;
        }
    }
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
    t=linear_search(a,n,x);
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