include<stdio.h>
void main()
{
int n,orgn,rev=0,rem;
printf("the number is ");
scanf("%d",&n);
orgn=n;
while(n!=0)
{
rem=n%10;
rev=rem+rev*rev*rev;
n/=10;
}
if(rev==orgn)
printf(the armstrong no is %d",rev);
else
printf("the no is not armstrong%d",rev);
getch();
}
