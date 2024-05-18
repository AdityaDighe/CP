#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while((j>=0 && a[j]>temp))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
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
 insertion_sort(a,n);
 for(i=0;i<n;i++)
 {
     printf("%d ",a[i]);
 }
 getch();
}