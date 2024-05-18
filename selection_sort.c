#include<stdio.h>
#include<conio.h>
void selection_sort(int a[], int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
void main()
{
 int i, n, a[100];
 printf("Enter the length of the array\n");
 scanf("%d",&n);
 printf("Enter the elements of the array\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 selection_sort(a,n);
 for(i=0;i<n;i++)
 {
     printf("%d ",a[i]);
 }
 getch();
}