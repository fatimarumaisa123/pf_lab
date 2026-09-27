#include <stdio.h>
#include <math.h>
int main() 
{
    int choice;
    float root,power,num,base,exp,abs,fl,cl;
   printf("select:\n1.square root \n2.power \n3.Absolute value \n4.Floor \n5.Ceiling\n"); 
   scanf("%d",&choice);
   switch (choice)
   {
   case 1:
    printf("input a number: ");
    scanf("%f",&num);
    if(num>=0)
    {
        root =sqrt(num);
    printf("square root: %.2f",root);
    }
    else 
    printf("invalid");
    break;
   case 2:
    printf("input base and exponents respectively: ");
    scanf("%f %f",&base,&exp);
    power=pow(base,exp);
    printf("power: %.0f",power);
    break;
   case 3:
    printf("input a number: ");
    scanf("%f",&num);
    abs=fabs(num);
    printf("absolute value: %.2f",abs);
    break;
   case 4:
    printf("input a number: ");
    scanf("%f",&num);
    fl=floor(num);
    printf("floor: %.1f",fl);
    break;
   case 5:
    printf("input a number: ");
    scanf("%f",&num);
    cl=ceil(num);
    printf("ceil: %.1f",cl);
    break;
   default:
   printf("invalid");
    break;
   }

return 0;
}