#include<stdio.h>
int main ()
{
 float a,b;
 printf("enter the amount and tax percentage");
 scanf("%f%f",&a,&b);
 printf("%f",(a*(100-b))/100);
 return 0;
 }
