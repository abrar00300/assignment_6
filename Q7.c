#include<stdio.h>
int main()
{
    int i,n,p=0;
    printf("enter your number to find number of digits  = ");
    scanf("%d",&n);
   while(n)
   {
       p++;
       n=n/10;
   }
   printf("number of digits are = %d",p);
    return 0;
}

