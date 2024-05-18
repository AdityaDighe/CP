#include<stdio.h>
#include<conio.h>
int bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void main()
{
    int n,i,a[100];
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    printf("Enter the elememts of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}