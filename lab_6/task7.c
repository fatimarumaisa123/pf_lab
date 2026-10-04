#include <stdio.h>
int main() 
{
   int num,spaces;
   printf("input a number: ");
   scanf("%d",&num);
   spaces=num-1;
   for(int i=0;i<spaces;i++)
      {
         printf(" ");
      }
   printf("*\n");
   for(int i =2;i<=num;i++)
   {
      spaces=num-i;
      for(int k=0;k<spaces;k++)
      {
         printf(" ");
      }
      printf("*");
      spaces=2*(i-1)-1;
       for(int j=0;j<spaces;j++)
      {
         printf(" ");
      }
      printf("*\n");


   }
      for(int i =num;i>=2;i--)
   {
      spaces=num-i;
      for(int k=0;k<spaces;k++)
      {
         printf(" ");
      }
      printf("*");
      spaces=2*(i-1)-1;
       for(int j=0;j<spaces;j++)
      {
         printf(" ");
      }
      printf("*\n");


   }
    spaces=num-1;
   for(int i=0;i<spaces;i++)
      {
         printf(" ");
      }
   printf("*\n");


   
 
return 0;
}