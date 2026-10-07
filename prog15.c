#include <stdio.h>
int main()
{
  int a;
  printf("enter the number of days:");
  scanf("%d",&a);
  printf("no of weeks=%d\n",a/7);//9
  printf("no of days=%d",a%7);//2
  return 0;
 }
