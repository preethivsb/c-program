#include<stdio.h>
void main()
{
int orgn,n,rem,rev;
orgn=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+remainder;
n/=10;
}
if(orgn==rev)
printf("the number is palindrome");
else
printf("the number is not palindrome");
return 0;
}
