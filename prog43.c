#include<stdio.h>
int main()
{
 float a,b,c;
 scanf("%f%f%f",&a,&b,&c);
 if( a+b>c && a+c>b && b+c>a)
 {
  printf("the given three sides can form a triangle");
 }
 else 
 {
  printf("the given three sides cannot form a triangle");
 }
 return 0;
}
  
