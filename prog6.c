#include <stdio.h>
int main ()
{ 
   char name [21];
   scanf("%s",name);
   scanf("%[^\n]",name);
   printf("%s",name);
   return 0 ;
 }
