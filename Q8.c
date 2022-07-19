#include<stdio.h>
int main()
{
    int i,n;
    printf("enter your number = ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
                break;
    }
    if(n==i || n==1)
        printf("%d is prime",n);
    else
        printf("%d is not prime",n);
    return 0;
}
