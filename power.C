#include<stdio.h>
#include<math.h>
void main()
{
double base,exp;
printf("enter base");
scanf("%f",&base);
printf("enter exponent");
scanf("%f",&exp);
res=pow(base,exp);
printf("%f^%f=%f",base,exp,res);
getch();
}
