#include<stdio.h>
int main()
{
    int i,r,n,d;
    printf("enter your number =");
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("reverse of number is %d",r);
    return 0;
}
