#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter your N = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i*i);
    }
    printf("sum of %d cube natural numbers are = %d",n,sum);
    return 0;
}


