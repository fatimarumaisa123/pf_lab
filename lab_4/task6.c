#include <stdio.h>
int main() 
{
    int obstacle,person,battery;
    printf("input 1 if obstacle is detected, otherwise 0:");
    scanf("%d",&obstacle);
    printf("input 1 if person is detected, otherwise 0:");
    scanf("%d",&person);
    printf("input battery percentage:");
    scanf("%d",&battery);
    if(obstacle == 1 )
   {
    if(person == 1)
     printf("emergency stop");
     else 
     printf("change direction");
   }
   else 
   {
     if (battery < 20) 
     printf("return to charging");
     else 
   printf ("continue moving");

   }

return 0;
}