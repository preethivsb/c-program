#include<stdio.h>
void main()
{
int y;
printf("enter the yaer");
scanf("%d",&y);
if(y%4==0)
{
if(y%100==0)
{
if(y%400==0)
printf("the year is leap year");
else
printf("the year is not leap year");
}
else
printf("the year is leap");
else
printf("the year is not leap");
getch();
}
