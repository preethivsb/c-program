#include<stdio.h>
#include<math.h>
int main()
{
double base,exponent,res;
printf("enter a base number");
scanf("%f",&base);
printf("enter a exponent");
scanf("%f",&exponent);
res=pow(base,exponent);
printf("%f^%f=%f",base,exponent,res);
return 0;
}
