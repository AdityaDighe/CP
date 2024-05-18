#include<stdio.h>
#include<conio.h>
void toh(int n, char s, char d, char u)
{
    if(n==1)
    {
        printf("Move ring from %c to %c\n",s,d);
    }
    else
    {
        toh(n-1,s,u,d);
        printf("Move ring from %c to %c\n",s,d);
        toh(n-1,u,d,s);
    }
}
void main()
{
    char s='A',d='B',u='C';
    int n;
    printf("Enter the number of rings\n");
    scanf("%d",&n);
    toh(n,s,d,u);
    getch();
}