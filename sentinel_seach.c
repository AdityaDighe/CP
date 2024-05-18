#include<stdio.h>
#include<conio.h>
void sentinel_search(int a[],int n, int x)
{
    int last= a[n-1];
    a[n-1]=x;
    int i=0;
    while(a[i]!=x)
    {
        i++;
    }
    a[n-1]=last;
    if ((i<n-1)||(a[n-1]==x))
    {
        printf("Found the element at %d index\n",i);
    }
    else
    {
        printf("Not Found\n");
    }
}
void main()
{
    int i, a[100], x, n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("Enter the searching element\n");
    scanf("%d",&x);
    sentinel_search(a,n,x);
    getch();
}