#include <stdio.h>
int main ()
{
char name[30],city[15];
int age;
printf("enter your name: ");
fgets(name,30,stdin);
printf("enter your age: ");
scanf("%d",&age);
getchar();
printf("enter your city: ");
fgets(city,15,stdin);
printf("Name: %s",name);
printf("Age: %d \n",age);
printf("City: %s",city);
return 0;
}