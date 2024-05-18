#include<stdio.h>
#include<conio.h>
void merge(int arr[], int l, int m, int r)
{

}
void mergesort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m=(l+(r-l)/2);
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}