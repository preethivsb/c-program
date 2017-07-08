#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("enter a numner");
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d the number is prime,n);
else
printf("%d the number is not prime,n);
return 0;
}
