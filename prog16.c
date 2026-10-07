#include <stdio.h>
int main()
{
  float a,b,c,d,e,total,percentage;
  printf("enter marks of five subjects");
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
  total=a+b+c+d+e;
  percentage=(total /500)*100;
  printf("total=%f",total);
  printf("percentage=%f\n",percentage);
  return 0;
 }
