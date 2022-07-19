#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter your N = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        sum=sum+i;
    }
    printf("sum of %d odd natural numbers are = %d",n,sum);
    return 0;
}

