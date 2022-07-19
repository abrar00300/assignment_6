#include<stdio.h>
int main()
{
    int i,n,p=1;
    printf("enter your number to find factorial = ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        p=i*p;
    }
    printf("factorial of %d is = %d",n,p);
    return 0;
}
