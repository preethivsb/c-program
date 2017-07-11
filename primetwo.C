#include<stdio.h>
int main()
{
int l,h,i,flag=0;
printf("enter a numner");
scanf("%d%d",l,h);
printf("prime no's are%d%d",l,h)
while(l<h)
{
flag==0;
for(i=2;i<=l/2;++i)
{
if(l%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d the number is prime,l);
else
printf("%d the number is not prime,l);
return 0;
}
